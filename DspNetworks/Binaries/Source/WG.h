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

namespace WG_impl
{
// ==============================| Node & Parameter type declarations |==============================

DECLARE_PARAMETER_RANGE_SKEW(dry_wet_mixer_c0Range, 
                             -100., 
                             0., 
                             5.42227);

using dry_wet_mixer_c0 = parameter::from0To1<core::gain, 
                                             0, 
                                             dry_wet_mixer_c0Range>;

using dry_wet_mixer_c1 = dry_wet_mixer_c0;

using dry_wet_mixer_multimod = parameter::list<dry_wet_mixer_c0, dry_wet_mixer_c1>;

using dry_wet_mixer_t = control::xfader<dry_wet_mixer_multimod, faders::linear>;

using dry_path_t = container::chain<parameter::empty, 
                                    wrap::fix<2, dry_wet_mixer_t>, 
                                    core::gain>;

DECLARE_PARAMETER_RANGE_SKEW(pma_modRange, 
                             0., 
                             64., 
                             0.30103);

using pma_mod = parameter::from0To1<jdsp::jdelay, 
                                    1, 
                                    pma_modRange>;

template <int NV>
using pma_t = control::pma<NV, pma_mod>;

struct cable_table_t_data
{
	span<float, 512> data =
	{
		1.f, 1.f, 1.f, 1.f, 1.f, 1.f,
		1.f, 1.f, 1.f, 1.f, 1.f, 1.f,
		1.f, 1.f, 1.f, 1.f, 1.f, 1.f,
		1.f, 1.f, 1.f, 1.f, 1.f, 1.f,
		1.f, 1.f, 1.f, 1.f, 1.f, 1.f,
		1.f, 1.f, 1.f, 1.f, 1.f, 1.f,
		1.f, 1.f, 1.f, 1.f, 1.f, 1.f,
		1.f, 1.f, 1.f, 1.f, 1.f, 1.f,
		1.f, 1.f, 1.f, 1.f, 1.f, 1.f,
		1.f, 1.f, 1.f, 1.f, 1.f, 1.f,
		1.f, 1.f, 1.f, 1.f, 1.f, 1.f,
		1.f, 1.f, 1.f, 1.f, 1.f, 1.f,
		1.f, 1.f, 1.f, 1.f, 1.f, 1.f,
		1.f, 1.f, 1.f, 1.f, 1.f, 1.f,
		1.f, 1.f, 1.f, 1.f, 1.f, 1.f,
		1.f, 1.f, 1.f, 1.f, 1.f, 1.f,
		0.999229f, 0.995115f, 0.991002f, 0.986888f, 0.982775f, 0.978661f,
		0.974548f, 0.970434f, 0.966321f, 0.962207f, 0.958094f, 0.95398f,
		0.949867f, 0.945753f, 0.94164f, 0.937527f, 0.933413f, 0.9293f,
		0.925186f, 0.921073f, 0.916959f, 0.912846f, 0.908732f, 0.904619f,
		0.900505f, 0.896392f, 0.892278f, 0.888165f, 0.884051f, 0.879938f,
		0.875824f, 0.871711f, 0.867597f, 0.863484f, 0.85937f, 0.855257f,
		0.851143f, 0.84703f, 0.842916f, 0.838803f, 0.83469f, 0.830576f,
		0.826463f, 0.822349f, 0.818236f, 0.814122f, 0.810009f, 0.805895f,
		0.801782f, 0.797668f, 0.793555f, 0.789441f, 0.785597f, 0.782416f,
		0.779234f, 0.776052f, 0.772871f, 0.769689f, 0.766508f, 0.763326f,
		0.760144f, 0.756963f, 0.753781f, 0.7506f, 0.747418f, 0.744236f,
		0.741055f, 0.737873f, 0.734692f, 0.73151f, 0.728328f, 0.725147f,
		0.721965f, 0.718784f, 0.715602f, 0.712421f, 0.709239f, 0.706057f,
		0.702876f, 0.699694f, 0.696513f, 0.693331f, 0.690149f, 0.686968f,
		0.683786f, 0.680605f, 0.677423f, 0.674241f, 0.67106f, 0.667878f,
		0.664697f, 0.661515f, 0.658333f, 0.655152f, 0.65197f, 0.648789f,
		0.645607f, 0.642425f, 0.639426f, 0.636724f, 0.634022f, 0.63132f,
		0.628618f, 0.625916f, 0.623214f, 0.620512f, 0.61781f, 0.615108f,
		0.612407f, 0.609705f, 0.607003f, 0.604301f, 0.601599f, 0.598897f,
		0.596195f, 0.593493f, 0.590791f, 0.588089f, 0.585387f, 0.582686f,
		0.579984f, 0.577282f, 0.57458f, 0.571946f, 0.569404f, 0.566862f,
		0.56432f, 0.561778f, 0.559236f, 0.556694f, 0.554152f, 0.551609f,
		0.549067f, 0.546525f, 0.543983f, 0.541441f, 0.538899f, 0.536357f,
		0.533815f, 0.531272f, 0.52873f, 0.526188f, 0.523646f, 0.521104f,
		0.518562f, 0.51602f, 0.513478f, 0.510936f, 0.508393f, 0.505851f,
		0.503309f, 0.500767f, 0.498225f, 0.495683f, 0.493237f, 0.490891f,
		0.488546f, 0.486201f, 0.483855f, 0.48151f, 0.479164f, 0.476819f,
		0.474474f, 0.472128f, 0.469783f, 0.467437f, 0.465092f, 0.462747f,
		0.460401f, 0.458056f, 0.45571f, 0.453365f, 0.45102f, 0.448674f,
		0.446329f, 0.443983f, 0.441638f, 0.439293f, 0.437031f, 0.434842f,
		0.432653f, 0.430464f, 0.428275f, 0.426086f, 0.423896f, 0.421707f,
		0.419518f, 0.417329f, 0.41514f, 0.412951f, 0.410762f, 0.408573f,
		0.406384f, 0.404195f, 0.402006f, 0.399817f, 0.397628f, 0.395439f,
		0.39325f, 0.391061f, 0.388872f, 0.386683f, 0.384494f, 0.382305f,
		0.380116f, 0.377927f, 0.375737f, 0.373548f, 0.371359f, 0.36917f,
		0.366981f, 0.364792f, 0.362603f, 0.360414f, 0.358333f, 0.356323f,
		0.354313f, 0.352302f, 0.350292f, 0.348282f, 0.346271f, 0.344261f,
		0.342251f, 0.34024f, 0.33823f, 0.33622f, 0.334209f, 0.332199f,
		0.330188f, 0.328178f, 0.326168f, 0.324157f, 0.322147f, 0.320137f,
		0.318126f, 0.316116f, 0.314106f, 0.312095f, 0.310085f, 0.308075f,
		0.306064f, 0.304054f, 0.30202f, 0.299973f, 0.297926f, 0.295879f,
		0.293832f, 0.291785f, 0.289738f, 0.287691f, 0.285644f, 0.283597f,
		0.28155f, 0.279504f, 0.277457f, 0.27541f, 0.273363f, 0.271316f,
		0.269269f, 0.267222f, 0.265175f, 0.263128f, 0.261082f, 0.259035f,
		0.25658f, 0.253953f, 0.251326f, 0.248699f, 0.246073f, 0.243446f,
		0.240819f, 0.238192f, 0.235565f, 0.232938f, 0.230311f, 0.227685f,
		0.225058f, 0.222431f, 0.219804f, 0.217177f, 0.21455f, 0.211923f,
		0.209297f, 0.20667f, 0.204043f, 0.201416f, 0.198789f, 0.196162f,
		0.193536f, 0.190909f, 0.188282f, 0.185655f, 0.183028f, 0.180401f,
		0.178651f, 0.177174f, 0.175698f, 0.174221f, 0.172745f, 0.171268f,
		0.169792f, 0.168315f, 0.166839f, 0.165363f, 0.163886f, 0.16241f,
		0.160933f, 0.159457f, 0.15798f, 0.156504f, 0.155027f, 0.153551f,
		0.152075f, 0.150598f, 0.149122f, 0.147645f, 0.146169f, 0.144692f,
		0.143216f, 0.141739f, 0.140263f, 0.138786f, 0.13731f, 0.135834f,
		0.134357f, 0.132881f, 0.131404f, 0.129928f, 0.128451f, 0.126975f,
		0.125498f, 0.124022f, 0.122545f, 0.121069f, 0.119593f, 0.118116f,
		0.11664f, 0.115163f, 0.113687f, 0.11221f, 0.110734f, 0.109257f,
		0.107781f, 0.106305f, 0.104828f, 0.103352f, 0.101875f, 0.100399f,
		0.0989223f, 0.0974458f, 0.0959694f, 0.0944929f, 0.0930164f, 0.09154f,
		0.0900636f, 0.0885871f, 0.0871106f, 0.0856342f, 0.0841578f, 0.0826813f,
		0.0812048f, 0.0797284f, 0.078252f, 0.0767755f, 0.075299f, 0.0738226f,
		0.0723462f, 0.0708697f, 0.0693932f, 0.0679168f, 0.0664403f, 0.0649639f,
		0.0634874f, 0.0620109f, 0.0605345f, 0.0590581f, 0.0575816f, 0.0561051f,
		0.0546287f, 0.0531523f, 0.0516758f, 0.0501993f, 0.0487229f, 0.0472465f,
		0.04577f, 0.0442936f, 0.0428171f, 0.0413407f, 0.0398642f, 0.0383878f,
		0.0369113f, 0.0354348f, 0.0339584f, 0.032482f, 0.0310055f, 0.0295291f,
		0.0280526f, 0.0265761f, 0.0250996f, 0.0236232f, 0.0221468f, 0.0206704f,
		0.0191939f, 0.0177175f, 0.016241f, 0.0147645f, 0.0132881f, 0.0118116f,
		0.0103351f, 0.00885868f, 0.00738227f, 0.00590587f, 0.00442934f, 0.00295293f,
		0.00147647f, 0.f
	};
};

template <int NV>
using cable_table_t = wrap::data<control::cable_table<parameter::plain<pma_t<NV>, 2>>, 
                                 data::embedded::table<cable_table_t_data>>;
template <int NV>
using midi_t = wrap::mod<parameter::plain<cable_table_t<NV>, 0>, 
                         control::midi<midi_logic::notenumber<NV>>>;
using stereo_cable = cable::block<2>;

DECLARE_PARAMETER_RANGE_SKEW(pma1_modRange, 
                             20., 
                             20000., 
                             0.229905);

template <int NV>
using pma1_mod = parameter::from0To1<filters::one_pole<NV>, 
                                     0, 
                                     pma1_modRange>;

template <int NV>
using pma1_t = control::pma<NV, pma1_mod<NV>>;

template <int NV>
using feedback_delay1_t_ = container::chain<parameter::empty, 
                                            wrap::fix<2, routing::receive<stereo_cable>>, 
                                            pma_t<NV>, 
                                            jdsp::jdelay, 
                                            pma1_t<NV>, 
                                            filters::one_pole<NV>, 
                                            routing::send<stereo_cable>>;

template <int NV>
using feedback_delay1_t = wrap::fix_block<32, feedback_delay1_t_<NV>>;

template <int NV>
using midichain_t_ = container::chain<parameter::empty, 
                                      wrap::fix<2, midi_t<NV>>, 
                                      cable_table_t<NV>, 
                                      feedback_delay1_t<NV>>;

template <int NV>
using midichain_t = wrap::event<midichain_t_<NV>>;

template <int NV>
using wet_path_t = container::chain<parameter::empty, 
                                    wrap::fix<2, midichain_t<NV>>, 
                                    core::gain>;

namespace dry_wet1_t_parameters
{
}

template <int NV>
using dry_wet1_t = container::split<parameter::plain<WG_impl::dry_wet_mixer_t, 0>, 
                                    wrap::fix<2, dry_path_t>, 
                                    wet_path_t<NV>>;

namespace WG_t_parameters
{
// Parameter list for WG_impl::WG_t ----------------------------------------------------------------

using feed = parameter::plain<routing::receive<stereo_cable>, 
                              0>;
template <int NV>
using mix = parameter::plain<WG_impl::dry_wet1_t<NV>, 
                             0>;
template <int NV>
using pitchmod = parameter::plain<WG_impl::pma_t<NV>, 0>;
template <int NV>
using cut = parameter::plain<WG_impl::pma1_t<NV>, 2>;
template <int NV>
using cutmod = parameter::plain<WG_impl::pma1_t<NV>, 0>;
template <int NV>
using WG_t_plist = parameter::list<feed, 
                                   mix<NV>, 
                                   pitchmod<NV>, 
                                   cut<NV>, 
                                   cutmod<NV>>;
}

template <int NV>
using WG_t_ = container::chain<WG_t_parameters::WG_t_plist<NV>, 
                               wrap::fix<2, dry_wet1_t<NV>>>;

// =================================| Root node initialiser class |=================================

template <int NV> struct instance: public WG_impl::WG_t_<NV>
{
	
	struct metadata
	{
		static const int NumTables = 0;
		static const int NumSliderPacks = 0;
		static const int NumAudioFiles = 0;
		static const int NumFilters = 0;
		static const int NumDisplayBuffers = 0;
		
		SNEX_METADATA_ID(WG);
		SNEX_METADATA_NUM_CHANNELS(2);
		SNEX_METADATA_ENCODED_PARAMETERS(78)
		{
			0x005B, 0x0000, 0x6600, 0x6565, 0x0064, 0x0000, 0x0000, 0x0000, 
            0x3F80, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 0x0000, 0x015B, 
            0x0000, 0x6D00, 0x7869, 0x0000, 0x0000, 0x0000, 0x8000, 0x6E3F, 
            0x2C83, 0x003F, 0x8000, 0x003F, 0x0000, 0x5B00, 0x0002, 0x0000, 
            0x6970, 0x6374, 0x6D68, 0x646F, 0x0000, 0x0000, 0x0000, 0x8000, 
            0x003F, 0x8000, 0x00BF, 0x8000, 0x003F, 0x0000, 0x5B00, 0x0003, 
            0x0000, 0x7563, 0x0074, 0x0000, 0x0000, 0x0000, 0x3F80, 0x0000, 
            0x3F80, 0x0000, 0x3F80, 0x0000, 0x0000, 0x045B, 0x0000, 0x6300, 
            0x7475, 0x6F6D, 0x0064, 0x0000, 0x0000, 0x0000, 0x3F80, 0x0000, 
            0xBF80, 0x0000, 0x3F80, 0x0000, 0x0000, 0x0000
		};
	};
	
	instance()
	{
		// Node References -------------------------------------------------------------------------
		
		auto& dry_wet1 = this->getT(0);                                 // WG_impl::dry_wet1_t<NV>
		auto& dry_path = this->getT(0).getT(0);                         // WG_impl::dry_path_t
		auto& dry_wet_mixer = this->getT(0).getT(0).getT(0);            // WG_impl::dry_wet_mixer_t
		auto& dry_gain = this->getT(0).getT(0).getT(1);                 // core::gain
		auto& wet_path = this->getT(0).getT(1);                         // WG_impl::wet_path_t<NV>
		auto& midichain = this->getT(0).getT(1).getT(0);                // WG_impl::midichain_t<NV>
		auto& midi = this->getT(0).getT(1).getT(0).getT(0);             // WG_impl::midi_t<NV>
		auto& cable_table = this->getT(0).getT(1).getT(0).getT(1);      // WG_impl::cable_table_t<NV>
		auto& feedback_delay1 = this->getT(0).getT(1).getT(0).getT(2);  // WG_impl::feedback_delay1_t<NV>
		auto& fb_out = this->getT(0).getT(1).getT(0).getT(2).getT(0);   // routing::receive<stereo_cable>
		auto& pma = this->getT(0).getT(1).getT(0).getT(2).getT(1);      // WG_impl::pma_t<NV>
		auto& jdelay3 = this->getT(0).getT(1).getT(0).getT(2).getT(2);  // jdsp::jdelay
		auto& pma1 = this->getT(0).getT(1).getT(0).getT(2).getT(3);     // WG_impl::pma1_t<NV>
		auto& one_pole = this->getT(0).getT(1).getT(0).getT(2).getT(4); // filters::one_pole<NV>
		auto& fb_in = this->getT(0).getT(1).getT(0).getT(2).getT(5);    // routing::send<stereo_cable>
		auto& wet_gain = this->getT(0).getT(1).getT(1);                 // core::gain
		
		// Parameter Connections -------------------------------------------------------------------
		
		dry_wet1.getParameterT(0).connectT(0, dry_wet_mixer); // DryWet -> dry_wet_mixer::Value
		this->getParameterT(0).connectT(0, fb_out);           // feed -> fb_out::Feedback
		
		this->getParameterT(1).connectT(0, dry_wet1); // mix -> dry_wet1::DryWet
		
		this->getParameterT(2).connectT(0, pma); // pitchmod -> pma::Value
		
		this->getParameterT(3).connectT(0, pma1); // cut -> pma1::Add
		
		this->getParameterT(4).connectT(0, pma1); // cutmod -> pma1::Value
		
		// Modulation Connections ------------------------------------------------------------------
		
		auto& dry_wet_mixer_p = dry_wet_mixer.getWrappedObject().getParameter();
		dry_wet_mixer_p.getParameterT(0).connectT(0, dry_gain);         // dry_wet_mixer -> dry_gain::Gain
		dry_wet_mixer_p.getParameterT(1).connectT(0, wet_gain);         // dry_wet_mixer -> wet_gain::Gain
		pma.getWrappedObject().getParameter().connectT(0, jdelay3);     // pma -> jdelay3::DelayTime
		cable_table.getWrappedObject().getParameter().connectT(0, pma); // cable_table -> pma::Add
		midi.getParameter().connectT(0, cable_table);                   // midi -> cable_table::Value
		pma1.getWrappedObject().getParameter().connectT(0, one_pole);   // pma1 -> one_pole::Frequency
		
		// Send Connections ------------------------------------------------------------------------
		
		fb_in.connect(fb_out);
		
		// Default Values --------------------------------------------------------------------------
		
		; // dry_wet1::DryWet is automated
		
		; // dry_wet_mixer::Value is automated
		
		;                                 // dry_gain::Gain is automated
		dry_gain.setParameterT(1, 586.9); // core::gain::Smoothing
		dry_gain.setParameterT(2, 0.);    // core::gain::ResetValue
		
		; // cable_table::Value is automated
		
		; // fb_out::Feedback is automated
		
		;                         // pma::Value is automated
		pma.setParameterT(1, 1.); // control::pma::Multiply
		;                         // pma::Add is automated
		
		jdelay3.setParameterT(0, 64.); // jdsp::jdelay::Limit
		;                              // jdelay3::DelayTime is automated
		
		;                          // pma1::Value is automated
		pma1.setParameterT(1, 1.); // control::pma::Multiply
		;                          // pma1::Add is automated
		
		;                                // one_pole::Frequency is automated
		one_pole.setParameterT(1, 0.3);  // filters::one_pole::Q
		one_pole.setParameterT(2, 0.);   // filters::one_pole::Gain
		one_pole.setParameterT(3, 0.01); // filters::one_pole::Smoothing
		one_pole.setParameterT(4, 0.);   // filters::one_pole::Mode
		one_pole.setParameterT(5, 1.);   // filters::one_pole::Enabled
		
		;                                 // wet_gain::Gain is automated
		wet_gain.setParameterT(1, 1000.); // core::gain::Smoothing
		wet_gain.setParameterT(2, 0.);    // core::gain::ResetValue
		
		this->setParameterT(0, 1.);
		this->setParameterT(1, 0.67388);
		this->setParameterT(2, -1.);
		this->setParameterT(3, 1.);
		this->setParameterT(4, -1.);
		this->setExternalData({}, -1);
	}
	
	static constexpr bool isPolyphonic() { return NV > 1; };
	
	static constexpr bool isProcessingHiseEvent() { return true; };
	
	static constexpr bool hasTail() { return true; };
	
	static constexpr bool isSuspendedOnSilence() { return false; };
	
	void setExternalData(const ExternalData& b, int index)
	{
		// External Data Connections ---------------------------------------------------------------
		
		this->getT(0).getT(1).getT(0).getT(1).setExternalData(b, index); // WG_impl::cable_table_t<NV>
	}
};
}

#undef getT
#undef connectT
#undef setParameterT
#undef setParameterWT
#undef getParameterT
// ======================================| Public Definition |======================================

namespace project
{
// polyphonic template declaration

template <int NV>
using WG = wrap::node<WG_impl::instance<NV>>;
}


