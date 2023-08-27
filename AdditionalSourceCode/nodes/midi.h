#pragma once

// These will improve the readability of the connection definition

#define getT(Idx) template get<Idx>()
#define connectT(Idx, target) template connect<Idx>(target)
#define getParameterT(Idx) template getParameter<Idx>()
#define setParameterT(Idx, value) template setParameter<Idx>(value)
#define setParameterWT(Idx, value) template setWrapParameter<Idx>(value)
using namespace scriptnode;
using namespace snex;
using namespace snex::Types;

namespace midi_impl
{
// =====================| Node & Parameter type declarations |=====================

template <int NV>
using midi1_t = wrap::mod<parameter::plain<routing::public_mod, 0>, 
                          control::midi<midi_logic::gate<NV>>>;

template <int NV>
using midichain_t_ = container::chain<parameter::empty, 
                                      wrap::fix<2, midi1_t<NV>>, 
                                      routing::public_mod>;

template <int NV>
using midichain_t = wrap::event<midichain_t_<NV>>;

template <int NV>
using midi_t_ = container::chain<parameter::empty, 
                                 wrap::fix<2, midichain_t<NV>>>;

// =========================| Root node initialiser class |=========================

template <int NV> struct instance:  public midi_impl::midi_t_<NV>,
                                    public routing::public_mod_target
{
	
	struct metadata
	{
		static const int NumTables = 0;
		static const int NumSliderPacks = 0;
		static const int NumAudioFiles = 0;
		static const int NumFilters = 0;
		static const int NumDisplayBuffers = 0;
		
		SNEX_METADATA_ID(midi);
		SNEX_METADATA_NUM_CHANNELS(2);
		SNEX_METADATA_ENCODED_PARAMETERS(2)
		{
			0x0000, 0x0000
		};
	};
	
	instance()
	{
		// Node References --------------------------------------------------------
		
		auto& midichain = this->getT(0);          // midi_impl::midichain_t<NV>
		auto& midi1 = this->getT(0).getT(0);      // midi_impl::midi1_t<NV>
		auto& public_mod = this->getT(0).getT(1); // routing::public_mod
		
		// Modulation Connections -------------------------------------------------
		
		midi1.getParameter().connectT(0, public_mod); // midi1 -> public_mod::Value
		
		// Public Mod Connection --------------------------------------------------
		
		public_mod.connect(*this);
		
		// Default Values ---------------------------------------------------------
		
		; // public_mod::Value is automated
		
	}
	
	static constexpr bool isPolyphonic() { return NV > 1; };
	
	static constexpr bool isProcessingHiseEvent() { return true; };
	
	static constexpr bool hasTail() { return true; };
	
	static constexpr bool isSuspendedOnSilence() { return false; };
};
}

#undef getT
#undef connectT
#undef setParameterT
#undef setParameterWT
#undef getParameterT
// ==============================| Public Definition |==============================

namespace project
{
// polyphonic template declaration

template <int NV>
using midi = wrap::node<midi_impl::instance<NV>>;
}


