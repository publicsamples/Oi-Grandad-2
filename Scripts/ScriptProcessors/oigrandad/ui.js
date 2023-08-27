Content.makeFrontInterface(895, 706);

Engine.loadFontAs("{PROJECT_FOLDER}Montserrat-Medium.ttf", "Montserrat");

  
  
 //
 const var gran = Synth.getEffect("gran");
 const var gran2 = Synth.getEffect("gran2");
 const var gran3 = Synth.getEffect("gran3");
 const var gran4 = Synth.getEffect("gran4");
 
const var loop1 = Content.getComponent("loop1");
const var granular1 = Content.getComponent("granular1");
const var loop2 = Content.getComponent("loop2");
const var granular2 = Content.getComponent("granular2");
const var loop3 = Content.getComponent("loop3");
const var granular3 = Content.getComponent("granular3");
const var loop4 = Content.getComponent("loop4");
const var granular4 = Content.getComponent("granular4");



include("roundrobin.js");


const var psync1 = Content.getComponent("psync1");
const var pitch1modsel = Content.getComponent("pitch1modsel");
const var pitchmod1 = Content.getComponent("pitchmod1");
const var pitchdiv1 = Content.getComponent("pitchdiv1");
const var psync2 = Content.getComponent("psync2");
const var pitch1modsel1 = Content.getComponent("pitch1modsel1");
const var pitchmod2 = Content.getComponent("pitchmod2");
const var pitchdiv2 = Content.getComponent("pitchdiv2");
const var psync3 = Content.getComponent("psync3");
const var pitch1modsel2 = Content.getComponent("pitch1modsel2");
const var pitchmod3 = Content.getComponent("pitchmod3");
const var pitchdiv3 = Content.getComponent("pitchdiv3");
const var psync4 = Content.getComponent("psync4");
const var pitch1modsel3 = Content.getComponent("pitch1modsel3");
const var pitchmod4 = Content.getComponent("pitchmod4");
const var pitchdiv4 = Content.getComponent("pitchdiv4");
const var pitchdivA = Content.getComponent("pitchdivA");
const var pitchdivA1 = Content.getComponent("pitchdivA1");
const var pitchdivA2 = Content.getComponent("pitchdivA2");
const var pitchdivA3 = Content.getComponent("pitchdivA3");
const var psyncST1 = Content.getComponent("psyncST1");
const var psyncST2 = Content.getComponent("psyncST2");
const var psyncST3 = Content.getComponent("psyncST3");
const var psyncST4 = Content.getComponent("psyncST4");






const var heads1 = Content.getComponent("ScriptTable14");
const var heads2 = Content.getComponent("ScriptTable15");
const var heads3 = Content.getComponent("ScriptTable16");
const var heads4 = Content.getComponent("ScriptTable13");
const var heads5 = Content.getComponent("ScriptTable17");
const var heads6 = Content.getComponent("ScriptTable18");
const var heads7 = Content.getComponent("ScriptTable19");
const var heads8 = Content.getComponent("ScriptTable20"); 
const var heads9 = Content.getComponent("ScriptTable21");
const var heads10 = Content.getComponent("ScriptTable22");
const var heads11 = Content.getComponent("ScriptTable23");
const var heads12 = Content.getComponent("ScriptTable24");
const var heads13 = Content.getComponent("ScriptTable25");
const var heads14 = Content.getComponent("ScriptTable26");
const var heads15 = Content.getComponent("ScriptTable27");
const var heads16 = Content.getComponent("ScriptTable28");                  

inline function onpsync1Control(component, value)
{
	    pitchdiv1.showControl(value); 
        pitchdiv1.showControl(1-value);
        grs1.setAttribute(grs1.psync, 0);
        grs1.setAttribute(grs1.psync, 1-value);
};

Content.getComponent("psync1").setControlCallback(onpsync1Control);

inline function onpsync2Control(component, value)
{
	    pitchdiv2.showControl(value); 
        pitchdiv2.showControl(1-value);
        grs2.setAttribute(grs2.psync, 0);
        grs2.setAttribute(grs2.psync, 1-value);
};

Content.getComponent("psync2").setControlCallback(onpsync2Control);

inline function onpsync3Control(component, value)
{
	    pitchdiv3.showControl(value); 
        pitchdiv3.showControl(1-value);
        grs3.setAttribute(grs3.psync, 0);
        grs3.setAttribute(grs3.psync, 1-value);
};

Content.getComponent("psync3").setControlCallback(onpsync3Control);

inline function onpsync4Control(component, value)
{
	    pitchdiv4.showControl(value); 
        pitchdiv4.showControl(1-value);
        grs4.setAttribute(grs4.psync, 0);
        grs4.setAttribute(grs4.psync, 1-value);
};

Content.getComponent("psync4").setControlCallback(onpsync4Control);


inline function onpsyncST1Control(component, value)
{
 		pitchdivA.showControl(value); 
        pitchdivA.showControl(1-value);
        grs1.setAttribute(grs1.psync, 0);
        grs1.setAttribute(grs1.psync, 1-value);
};

Content.getComponent("psyncST1").setControlCallback(onpsyncST1Control);

inline function onpsyncST2Control(component, value)
{
 		pitchdivA1.showControl(value); 
        pitchdivA1.showControl(1-value);
        grs2.setAttribute(grs2.psync, 0);
        grs2.setAttribute(grs2.psync, 1-value);
};

Content.getComponent("psyncST2").setControlCallback(onpsyncST2Control);

inline function onpsyncST3Control(component, value)
{
 		pitchdivA2.showControl(value); 
        pitchdivA2.showControl(1-value);
        grs3.setAttribute(grs3.psync, 0);
        grs3.setAttribute(grs3.psync, 1-value);
};

Content.getComponent("psyncST3").setControlCallback(onpsyncST3Control);

inline function onpsyncST4Control(component, value)
{
 		pitchdivA3.showControl(value); 
        pitchdivA3.showControl(1-value);
        grs4.setAttribute(grs4.psync, 0);
        grs4.setAttribute(grs4.psync, 1-value);
};

Content.getComponent("psyncST4").setControlCallback(onpsyncST4Control);

//switch voice modes

const var voicemode1 = Content.getComponent("voicemode1");


inline function onvoicemode1Control(component, value)
{
		loop1.showControl(value); 
        granular1.showControl(1-value);
        heads1.showControl(value); 
        heads1.showControl(1-value);
        heads2.showControl(value); 
        heads2.showControl(1-value);
        heads3.showControl(value); 
        heads3.showControl(1-value);
        heads4.showControl(value); 
        heads4.showControl(1-value);
       grs1.setAttribute(grs1.mode, 0);
       grs1.setAttribute(grs1.mode, 1-value);
};

Content.getComponent("voicemode1").setControlCallback(onvoicemode1Control);

const var voicemode2 = Content.getComponent("voicemode2");


inline function onvoicemode2Control(component, value)
{
		loop2.showControl(value); 
        granular2.showControl(1-value);
        heads5.showControl(value); 
        heads5.showControl(1-value);
         heads6.showControl(value); 
         heads6.showControl(1-value);
          heads7.showControl(value); 
          heads7.showControl(1-value);
           heads8.showControl(value); 
           heads8.showControl(1-value);
       grs2.setAttribute(grs2.mode, 0);
       grs2.setAttribute(grs2.mode, 1-value);
};

Content.getComponent("voicemode2").setControlCallback(onvoicemode2Control);

const var voicemode3 = Content.getComponent("voicemode3");


inline function onvoicemode3Control(component, value)
{
		loop3.showControl(value); 
        granular3.showControl(1-value);
        heads9.showControl(value); 
        heads9.showControl(1-value);
        heads10.showControl(value); 
        heads10.showControl(1-value);
        heads11.showControl(value); 
        heads11.showControl(1-value);
        heads12.showControl(value); 
        heads12.showControl(1-value);
       grs3.setAttribute(grs3.mode, 0);
       grs3.setAttribute(grs3.mode, 1-value);
};

Content.getComponent("voicemode3").setControlCallback(onvoicemode3Control);

const var voicemode4 = Content.getComponent("voicemode4");


inline function onvoicemode4Control(component, value)
{
		loop4.showControl(value); 
        granular4.showControl(1-value);
        heads13.showControl(value); 
       heads13.showControl(1-value);
      heads14.showControl(value); 
      heads14.showControl(1-value);
      heads15.showControl(value); 
      heads15.showControl(1-value);
      heads16.showControl(value); 
      heads16.showControl(1-value);
       grs4.setAttribute(grs4.mode, 0);
       grs4.setAttribute(grs4.mode, 1-value);
};

Content.getComponent("voicemode4").setControlCallback(onvoicemode4Control);


// Switch grain slider

const var gsync1 = Content.getComponent("gsync1");
const var grainsizesync1 = Content.getComponent("gsync1");
const var grs1 = Synth.getEffect("gran");
const var graindiv1 = Content.getComponent("graindiv1");



inline function ongsync1Control(number, value)
{
		graindiv1.showControl(value); 
        graindiv1.showControl(1-value);
       grs1.setAttribute(grs1.gsync, 0);
       grs1.setAttribute(grs1.gsync, 1-value);
}


gsync1.setControlCallback(ongsync1Control);

const var gsync2 = Content.getComponent("gsync2");
const var grainsizesync2 = Content.getComponent("gsync2");
const var grs2 = Synth.getEffect("gran2");
const var graindiv2 = Content.getComponent("graindiv2");


inline function ongsync2Control(component, value)
{
		graindiv2.showControl(value); 
        graindiv2.showControl(1-value);
       grs2.setAttribute(grs2.gsync, 0);
       grs2.setAttribute(grs2.gsync, 1-value);
};

Content.getComponent("gsync2").setControlCallback(ongsync2Control);



const var gsync3 = Content.getComponent("gsync3");
const var grainsizesync3 = Content.getComponent("gsync3");
const var grs3 = Synth.getEffect("gran3");
const var graindiv3 = Content.getComponent("graindiv3");



inline function ongsync3Control(number, value)
{
		graindiv3.showControl(value); 
        graindiv3.showControl(1-value);
       grs3.setAttribute(grs3.gsync, 0);
       grs3.setAttribute(grs3.gsync, 1-value);
}


gsync3.setControlCallback(ongsync3Control);

const var gsync4 = Content.getComponent("gsync4");
const var grainsizesync4 = Content.getComponent("gsync4");
const var grs4 = Synth.getEffect("gran4");
const var graindiv4 = Content.getComponent("graindiv4");



inline function ongsync4Control(number, value)
{
		graindiv4.showControl(value); 
        graindiv4.showControl(1-value);
       grs4.setAttribute(grs4.gsync, 0);
       grs4.setAttribute(grs4.gsync, 1-value);
}


gsync4.setControlCallback(ongsync4Control);


// Multichannel menus
const var MultiChannelTest = Synth.getChildSynth("oi grandad");


var matrix = MultiChannelTest.getRoutingMatrix();

const var SucessLabel = Content.getComponent("SucessLabel");
const var SucessLabel1 = Content.getComponent("SucessLabel1");
const var SucessLabel2 = Content.getComponent("SucessLabel2");
const var SucessLabel3 = Content.getComponent("SucessLabel3");


inline function onOutputSelectorControl(component, value)
{
	
	local success = true;
	
	switch(value)
    {
        case 1: 
            matrix.addConnection(0, 0);
            matrix.addConnection(1, 1);
            break;
        case 2: 
            matrix.addConnection(0, 2);
            
          
            success = matrix.addConnection(1, 3);
            break;
        case 3:
            matrix.addConnection(0, 4);
            success = matrix.addConnection(1, 5);
            break;
        case 4:
            matrix.addConnection(0, 6);
            success = matrix.addConnection(1, 7);
            break;
    }
    
    if(!success)
    {
        matrix.addConnection(0, 0);
        matrix.addConnection(1, 1);
    }
    
    SucessLabel.set("text", success ? "OK" : "Error");
};

Content.getComponent("OutputSelector").setControlCallback(onOutputSelectorControl);

inline function onOutputSelector1Control(component, value)
{

	local success = true;
	
	switch(value)
    {
        case 1:
            matrix.addConnection(2, 0);
            matrix.addConnection(3, 1);
            break;
        case 2:
            matrix.addConnection(2, 2);
            success = matrix.addConnection(3, 3);
            break;
        case 3:
            matrix.addConnection(2, 4);
            success = matrix.addConnection(3, 5);
            break;
        case 4:
            matrix.addConnection(2, 6);
            success = matrix.addConnection(3, 7);
            break;
    }
    
    if(!success)
    {
        matrix.addConnection(2, 0);
        matrix.addConnection(3, 1);
    }
    
    SucessLabel1.set("text", success ? "OK" : "Error");
};

Content.getComponent("OutputSelector1").setControlCallback(onOutputSelector1Control);



inline function onOutputSelector2Control(component, value)
{

	local success = true;
	
	switch(value)
    {
        case 1:
            matrix.addConnection(4, 0);
            matrix.addConnection(5, 1);
            break;
        case 2:
            matrix.addConnection(4, 2);
            success = matrix.addConnection(5, 3);
            break;
        case 3:
            matrix.addConnection(4, 4);
            success = matrix.addConnection(5, 5);
            break;
        case 4:
            matrix.addConnection(4, 6);
            success = matrix.addConnection(5, 7);
            break;
    }
    
    if(!success)
    {
        matrix.addConnection(4, 0);
        matrix.addConnection(5, 1);
    }
    
    SucessLabel2.set("text", success ? "OK" : "Error");
};

Content.getComponent("OutputSelector2").setControlCallback(onOutputSelector2Control);



inline function onOutputSelector3Control(component, value)
{

	local success = true;
	
	switch(value)
    {
        case 1:
            matrix.addConnection(6, 0);
            matrix.addConnection(7, 1);
            break;
        case 2:
            matrix.addConnection(6, 2);
            success = matrix.addConnection(7, 3);
            break;
        case 3:
            matrix.addConnection(6, 4);
            success = matrix.addConnection(7, 5);
            break;
        case 4:
            matrix.addConnection(6, 6);
            success = matrix.addConnection(7, 7);
            break;
    }
    
    if(!success)
    {
        matrix.addConnection(6, 0);
        matrix.addConnection(7, 1);
    }
    
    SucessLabel3.set("text", success ? "OK" : "Error");
};

Content.getComponent("OutputSelector3").setControlCallback(onOutputSelector3Control);




function onControl(number, value)
{
    if(number == widget1)
    {
        Module1.setAttribute(Module1.Parameter, value);
    }
    else if (number == widget2)
    {
        Module2.setAttribute(Module2.Parameter, value);
    }
}
//show hide env params
const var modpage = Content.getComponent("modpage");
const var table = Content.getComponent("MOD1");
const var step = Content.getComponent("MOD2");

const var mods = [];

mods[0] = Content.getComponent("MOD1");
mods[1] = Content.getComponent("MOD2");
mods[2] = Content.getComponent("MOD3");


inline function onmodpageControl(component, value)
{
	for (i = 0; i < mods.length; i++)
        mods[i].fadeComponent(value - 1 == i, 500);
};

Content.getComponent("modpage").setControlCallback(onmodpageControl);


const var button1 = Content.getComponent("seq1type1");
const var table1 = Content.getComponent("ScriptTable1");
const var step1 = Content.getComponent("SliderPackA");
const var s1 = Synth.getModulator("s1");

const var mod1tables = []

mod1tables[0] = Content.getComponent("MOD1Table1");
mod1tables[1] = Content.getComponent("MOD1Table2");
mod1tables[2] = Content.getComponent("MOD1Table3");
mod1tables[3] = Content.getComponent("MOD1Table4");
mod1tables[4] = Content.getComponent("MOD1Table5");
mod1tables[5] = Content.getComponent("MOD1Table6");
mod1tables[6] = Content.getComponent("MOD1Table7");
mod1tables[7] = Content.getComponent("MOD1Table8");

const var Mod1SPs = []

Mod1SPs[0] = Content.getComponent("Mod1SP1");
Mod1SPs[1] = Content.getComponent("Mod1SP2");
Mod1SPs[2] = Content.getComponent("Mod1SP3");
Mod1SPs[3] = Content.getComponent("Mod1SP4");
Mod1SPs[4] = Content.getComponent("Mod1SP5");
Mod1SPs[5] = Content.getComponent("Mod1SP6");
Mod1SPs[6] = Content.getComponent("Mod1SP7");
Mod1SPs[7] = Content.getComponent("Mod1SP8");



const var modpreset = Content.getComponent("modpreset");


inline function onmodpresetControl(component, value)
{
 for (i = 0; i < mod1tables.length; i++)
        mod1tables[i].fadeComponent(value - 1 == i, 500);
        
  for (i = 0; i < Mod1SPs.length; i++)
               Mod1SPs[i].fadeComponent(value - 1 == i, 1500);
        
        s1.setAttribute(s1. morph, value);
};


Content.getComponent("modpreset").setControlCallback(onmodpresetControl);

const var mod2tables = []

mod2tables[0] = Content.getComponent("MOD1Table9");
mod2tables[1] = Content.getComponent("MOD1Table10");
mod2tables[2] = Content.getComponent("MOD1Table11");
mod2tables[3] = Content.getComponent("MOD1Table12");
mod2tables[4] = Content.getComponent("MOD1Table13");
mod2tables[5] = Content.getComponent("MOD1Table14");
mod2tables[6] = Content.getComponent("MOD1Table15");
mod2tables[7] = Content.getComponent("MOD1Table16");

const var Mod2SPs = []

Mod2SPs[0] = Content.getComponent("Mod1SP9");
Mod2SPs[1] = Content.getComponent("Mod1SP10");
Mod2SPs[2] = Content.getComponent("Mod1SP11");
Mod2SPs[3] = Content.getComponent("Mod1SP12");
Mod2SPs[4] = Content.getComponent("Mod1SP13");
Mod2SPs[5] = Content.getComponent("Mod1SP14");
Mod2SPs[6] = Content.getComponent("Mod1SP15");
Mod2SPs[7] = Content.getComponent("Mod1SP16");



const var modpreset1 = Content.getComponent("modpreset1");


inline function onmodpreset1Control(component, value)
{
 for (i = 0; i < mod2tables.length; i++)
        mod2tables[i].fadeComponent(value - 1 == i, 500);
        
  for (i = 0; i < Mod2SPs.length; i++)
               Mod2SPs[i].fadeComponent(value - 1 == i, 1500);
        
        s1.setAttribute(s1. morph, value);
};


Content.getComponent("modpreset1").setControlCallback(onmodpreset1Control);


const var mod3tables = []

mod3tables[0] = Content.getComponent("MOD1Table17");
mod3tables[1] = Content.getComponent("MOD1Table18");
mod3tables[2] = Content.getComponent("MOD1Table19");
mod3tables[3] = Content.getComponent("MOD1Table20");
mod3tables[4] = Content.getComponent("MOD1Table21");
mod3tables[5] = Content.getComponent("MOD1Table22");
mod3tables[6] = Content.getComponent("MOD1Table23");
mod3tables[7] = Content.getComponent("MOD1Table24");

const var Mod3SPs = []

Mod3SPs[0] = Content.getComponent("Mod1SP17");
Mod3SPs[1] = Content.getComponent("Mod1SP18");
Mod3SPs[2] = Content.getComponent("Mod1SP19");
Mod3SPs[3] = Content.getComponent("Mod1SP20");
Mod3SPs[4] = Content.getComponent("Mod1SP21");
Mod3SPs[5] = Content.getComponent("Mod1SP22");
Mod3SPs[6] = Content.getComponent("Mod1SP23");
Mod3SPs[7] = Content.getComponent("Mod1SP24");



const var modpreset2 = Content.getComponent("modpreset2");


inline function onmodpreset2Control(component, value)
{
 for (i = 0; i < mod3tables.length; i++)
        mod3tables[i].fadeComponent(value - 1 == i, 500);
        
  for (i = 0; i < Mod3SPs.length; i++)
               Mod3SPs[i].fadeComponent(value - 1 == i, 1500);
        
        s1.setAttribute(s1. morph, value);
};


Content.getComponent("modpreset2").setControlCallback(onmodpreset2Control);

const var mod4tables = []

mod4tables[0] = Content.getComponent("MOD1Table25");
mod4tables[1] = Content.getComponent("MOD1Table26");
mod4tables[2] = Content.getComponent("MOD1Table27");
mod4tables[3] = Content.getComponent("MOD1Table28");
mod4tables[4] = Content.getComponent("MOD1Table29");
mod4tables[5] = Content.getComponent("MOD1Table30");
mod4tables[6] = Content.getComponent("MOD1Table31");
mod4tables[7] = Content.getComponent("MOD1Table32");

const var Mod4SPs = []

Mod4SPs[0] = Content.getComponent("Mod1SP25");
Mod4SPs[1] = Content.getComponent("Mod1SP26");
Mod4SPs[2] = Content.getComponent("Mod1SP27");
Mod4SPs[3] = Content.getComponent("Mod1SP28");
Mod4SPs[4] = Content.getComponent("Mod1SP29");
Mod4SPs[5] = Content.getComponent("Mod1SP30");
Mod4SPs[6] = Content.getComponent("Mod1SP31");
Mod4SPs[7] = Content.getComponent("Mod1SP32");



const var modpreset3 = Content.getComponent("modpreset3");


inline function onmodpreset3Control(component, value)
{
 for (i = 0; i < mod4tables.length; i++)
        mod4tables[i].fadeComponent(value - 1 == i, 500);
        
  for (i = 0; i < Mod4SPs.length; i++)
               Mod4SPs[i].fadeComponent(value - 1 == i, 1500);
        
        s1.setAttribute(s1. morph, value);
};


Content.getComponent("modpreset3").setControlCallback(onmodpreset3Control);

const var mod5tables = []

mod5tables[0] = Content.getComponent("MOD1Table33");
mod5tables[1] = Content.getComponent("MOD1Table34");
mod5tables[2] = Content.getComponent("MOD1Table35");
mod5tables[3] = Content.getComponent("MOD1Table36");
mod5tables[4] = Content.getComponent("MOD1Table37");
mod5tables[5] = Content.getComponent("MOD1Table38");
mod5tables[6] = Content.getComponent("MOD1Table39");
mod5tables[7] = Content.getComponent("MOD1Table40");

const var Mod5SPs = []

Mod5SPs[0] = Content.getComponent("Mod1SP33");
Mod5SPs[1] = Content.getComponent("Mod1SP34");
Mod5SPs[2] = Content.getComponent("Mod1SP35");
Mod5SPs[3] = Content.getComponent("Mod1SP36");
Mod5SPs[4] = Content.getComponent("Mod1SP37");
Mod5SPs[5] = Content.getComponent("Mod1SP38");
Mod5SPs[6] = Content.getComponent("Mod1SP39");
Mod5SPs[7] = Content.getComponent("Mod1SP40");



const var modpreset4 = Content.getComponent("modpreset4");


inline function onmodpreset4Control(component, value)
{
 for (i = 0; i < mod5tables.length; i++)
        mod5tables[i].fadeComponent(value - 1 == i, 500);
        
  for (i = 0; i < Mod5SPs.length; i++)
               Mod5SPs[i].fadeComponent(value - 1 == i, 1500);
        
        s1.setAttribute(s1. morph, value);
};


Content.getComponent("modpreset4").setControlCallback(onmodpreset4Control);

const var mod6tables = []

mod6tables[0] = Content.getComponent("MOD1Table41");
mod6tables[1] = Content.getComponent("MOD1Table42");
mod6tables[2] = Content.getComponent("MOD1Table43");
mod6tables[3] = Content.getComponent("MOD1Table44");
mod6tables[4] = Content.getComponent("MOD1Table45");
mod6tables[5] = Content.getComponent("MOD1Table46");
mod6tables[6] = Content.getComponent("MOD1Table47");
mod6tables[7] = Content.getComponent("MOD1Table48");

const var Mod6SPs = []

Mod6SPs[0] = Content.getComponent("Mod1SP41");
Mod6SPs[1] = Content.getComponent("Mod1SP42");
Mod6SPs[2] = Content.getComponent("Mod1SP43");
Mod6SPs[3] = Content.getComponent("Mod1SP44");
Mod6SPs[4] = Content.getComponent("Mod1SP45");
Mod6SPs[5] = Content.getComponent("Mod1SP46");
Mod6SPs[6] = Content.getComponent("Mod1SP47");
Mod6SPs[7] = Content.getComponent("Mod1SP48");



const var modpreset5 = Content.getComponent("modpreset5");


inline function onmodpreset5Control(component, value)
{
 for (i = 0; i < mod6tables.length; i++)
        mod6tables[i].fadeComponent(value - 1 == i, 500);
        
  for (i = 0; i < Mod6SPs.length; i++)
               Mod6SPs[i].fadeComponent(value - 1 == i, 1500);
        
        s1.setAttribute(s1. morph, value);
};


Content.getComponent("modpreset5").setControlCallback(onmodpreset5Control);

const var mod7tables = []

mod7tables[0] = Content.getComponent("MOD1Table49");
mod7tables[1] = Content.getComponent("MOD1Table50");
mod7tables[2] = Content.getComponent("MOD1Table51");
mod7tables[3] = Content.getComponent("MOD1Table52");
mod7tables[4] = Content.getComponent("MOD1Table53");
mod7tables[5] = Content.getComponent("MOD1Table54");
mod7tables[6] = Content.getComponent("MOD1Table55");
mod7tables[7] = Content.getComponent("MOD1Table56");

const var Mod7SPs = []

Mod7SPs[0] = Content.getComponent("Mod1SP49");
Mod7SPs[1] = Content.getComponent("Mod1SP50");
Mod7SPs[2] = Content.getComponent("Mod1SP51");
Mod7SPs[3] = Content.getComponent("Mod1SP52");
Mod7SPs[4] = Content.getComponent("Mod1SP53");
Mod7SPs[5] = Content.getComponent("Mod1SP54");
Mod7SPs[6] = Content.getComponent("Mod1SP55");
Mod7SPs[7] = Content.getComponent("Mod1SP56");



const var modpreset6 = Content.getComponent("modpreset6");


inline function onmodpreset6Control(component, value)
{
 for (i = 0; i < mod7tables.length; i++)
        mod7tables[i].fadeComponent(value - 1 == i, 500);
        
  for (i = 0; i < Mod7SPs.length; i++)
               Mod7SPs[i].fadeComponent(value - 1 == i, 1500);
        
        s1.setAttribute(s1. morph, value);
};


Content.getComponent("modpreset6").setControlCallback(onmodpreset6Control);

const var Mod8tables = []

Mod8tables[0] = Content.getComponent("MOD1Table57");
Mod8tables[1] = Content.getComponent("MOD1Table58");
Mod8tables[2] = Content.getComponent("MOD1Table59");
Mod8tables[3] = Content.getComponent("MOD1Table60");
Mod8tables[4] = Content.getComponent("MOD1Table61");
Mod8tables[5] = Content.getComponent("MOD1Table62");
Mod8tables[6] = Content.getComponent("MOD1Table63");
Mod8tables[7] = Content.getComponent("MOD1Table64");

const var Mod8SPs = []

Mod8SPs[0] = Content.getComponent("Mod1SP57");
Mod8SPs[1] = Content.getComponent("Mod1SP58");
Mod8SPs[2] = Content.getComponent("Mod1SP59");
Mod8SPs[3] = Content.getComponent("Mod1SP60");
Mod8SPs[4] = Content.getComponent("Mod1SP61");
Mod8SPs[5] = Content.getComponent("Mod1SP62");
Mod8SPs[6] = Content.getComponent("Mod1SP63");
Mod8SPs[7] = Content.getComponent("Mod1SP64");



const var modpreset7 = Content.getComponent("modpreset6");


inline function onmodpreset7Control(component, value)
{
 for (i = 0; i < Mod8tables.length; i++)
        Mod8tables[i].fadeComponent(value - 1 == i, 500);
        
  for (i = 0; i < Mod8SPs.length; i++)
               Mod8SPs[i].fadeComponent(value - 1 == i, 1500);
        
        s1.setAttribute(s1. morph, value);
};


Content.getComponent("modpreset7").setControlCallback(onmodpreset7Control);


const var mod9tables = []

mod9tables[0] = Content.getComponent("MOD1Table65");
mod9tables[1] = Content.getComponent("MOD1Table66");
mod9tables[2] = Content.getComponent("MOD1Table67");
mod9tables[3] = Content.getComponent("MOD1Table68");
mod9tables[4] = Content.getComponent("MOD1Table69");
mod9tables[5] = Content.getComponent("MOD1Table70");
mod9tables[6] = Content.getComponent("MOD1Table71");
mod9tables[7] = Content.getComponent("MOD1Table72");

const var mod9SPs = []

mod9SPs[0] = Content.getComponent("Mod1SP65");
mod9SPs[1] = Content.getComponent("Mod1SP66");
mod9SPs[2] = Content.getComponent("Mod1SP67");
mod9SPs[3] = Content.getComponent("Mod1SP68");
mod9SPs[4] = Content.getComponent("Mod1SP69");
mod9SPs[5] = Content.getComponent("Mod1SP70");
mod9SPs[6] = Content.getComponent("Mod1SP71");
mod9SPs[7] = Content.getComponent("Mod1SP72");



const var modpreset8 = Content.getComponent("modpreset8");


inline function onmodpreset8Control(component, value)
{
 for (i = 0; i < mod9tables.length; i++)
        mod9tables[i].fadeComponent(value - 1 == i, 500);
        
  for (i = 0; i < mod9SPs.length; i++)
               mod9SPs[i].fadeComponent(value - 1 == i, 1500);
        
        s1.setAttribute(s1. morph, value);
};


Content.getComponent("modpreset8").setControlCallback(onmodpreset8Control);

const var mod10tables = []

mod10tables[0] = Content.getComponent("MOD1Table73");
mod10tables[1] = Content.getComponent("MOD1Table74");
mod10tables[2] = Content.getComponent("MOD1Table75");
mod10tables[3] = Content.getComponent("MOD1Table76");
mod10tables[4] = Content.getComponent("MOD1Table77");
mod10tables[5] = Content.getComponent("MOD1Table78");
mod10tables[6] = Content.getComponent("MOD1Table79");
mod10tables[7] = Content.getComponent("MOD1Table80");

const var mod10SPs = []

mod10SPs[0] = Content.getComponent("Mod1SP73");
mod10SPs[1] = Content.getComponent("Mod1SP74");
mod10SPs[2] = Content.getComponent("Mod1SP75");
mod10SPs[3] = Content.getComponent("Mod1SP76");
mod10SPs[4] = Content.getComponent("Mod1SP77");
mod10SPs[5] = Content.getComponent("Mod1SP78");
mod10SPs[6] = Content.getComponent("Mod1SP79");
mod10SPs[7] = Content.getComponent("Mod1SP80");



const var modpreset9 = Content.getComponent("modpreset9");


inline function onmodpreset9Control(component, value)
{
 for (i = 0; i < mod10tables.length; i++)
        mod10tables[i].fadeComponent(value - 1 == i, 500);
        
  for (i = 0; i < mod10SPs.length; i++)
               mod10SPs[i].fadeComponent(value - 1 == i, 1500);
        
        s10.setAttribute(s10. morph, value);
};


Content.getComponent("modpreset9").setControlCallback(onmodpreset9Control);

const var mod11tables = []

mod11tables[0] = Content.getComponent("MOD1Table81");
mod11tables[1] = Content.getComponent("MOD1Table82");
mod11tables[2] = Content.getComponent("MOD1Table83");
mod11tables[3] = Content.getComponent("MOD1Table84");
mod11tables[4] = Content.getComponent("MOD1Table85");
mod11tables[5] = Content.getComponent("MOD1Table86");
mod11tables[6] = Content.getComponent("MOD1Table87");
mod11tables[7] = Content.getComponent("MOD1Table88");

const var mod11SPs = []

mod11SPs[0] = Content.getComponent("Mod1SP81");
mod11SPs[1] = Content.getComponent("Mod1SP82");
mod11SPs[2] = Content.getComponent("Mod1SP83");
mod11SPs[3] = Content.getComponent("Mod1SP84");
mod11SPs[4] = Content.getComponent("Mod1SP85");
mod11SPs[5] = Content.getComponent("Mod1SP86");
mod11SPs[6] = Content.getComponent("Mod1SP87");
mod11SPs[7] = Content.getComponent("Mod1SP88");



const var modpreset10 = Content.getComponent("modpreset10");


inline function onmodpreset10Control(component, value)
{
 for (i = 0; i < mod11tables.length; i++)
        mod11tables[i].fadeComponent(value - 1 == i, 500);
        
  for (i = 0; i < mod11SPs.length; i++)
               mod11SPs[i].fadeComponent(value - 1 == i, 1500);
        
        s11.setAttribute(s11. morph, value);
};


Content.getComponent("modpreset10").setControlCallback(onmodpreset10Control);

const var mod12tables = []

mod12tables[0] = Content.getComponent("MOD1Table89");
mod12tables[1] = Content.getComponent("MOD1Table90");
mod12tables[2] = Content.getComponent("MOD1Table91");
mod12tables[3] = Content.getComponent("MOD1Table92");
mod12tables[4] = Content.getComponent("MOD1Table93");
mod12tables[5] = Content.getComponent("MOD1Table94");
mod12tables[6] = Content.getComponent("MOD1Table95");
mod12tables[7] = Content.getComponent("MOD1Table96");

const var mod12SPs = []

mod12SPs[0] = Content.getComponent("Mod1SP89");
mod12SPs[1] = Content.getComponent("Mod1SP90");
mod12SPs[2] = Content.getComponent("Mod1SP91");
mod12SPs[3] = Content.getComponent("Mod1SP92");
mod12SPs[4] = Content.getComponent("Mod1SP93");
mod12SPs[5] = Content.getComponent("Mod1SP94");
mod12SPs[6] = Content.getComponent("Mod1SP95");
mod12SPs[7] = Content.getComponent("Mod1SP96");



const var modpreset11 = Content.getComponent("modpreset11");


inline function onmodpreset11Control(component, value)
{
 for (i = 0; i < mod12tables.length; i++)
        mod12tables[i].fadeComponent(value - 1 == i, 500);
        
  for (i = 0; i < mod12SPs.length; i++)
               mod12SPs[i].fadeComponent(value - 1 == i, 1500);
        
        s11.setAttribute(s11. morph, value);
};


Content.getComponent("modpreset11").setControlCallback(onmodpreset11Control);

inline function onseq1typeControl(number, value)
{
        step1.showControl(value);
        table1.showControl(1-value); 
        s1.setAttribute(s1.type, 1-value);
        s2.setAttribute(s2.type, 0);
}


button1.setControlCallback(onseq1typeControl);




const var button2 = Content.getComponent("seq1type2");
const var table2 = Content.getComponent("ScriptTable2");
const var step2 = Content.getComponent("SliderPackA2");
const var s2 = Synth.getModulator("s2");

inline function onseq1type2Control(number, value)
{
        step2.showControl(value);
        table2.showControl(1-value); 
        s2.setAttribute(s2.type, 0);
        s2.setAttribute(s2.type, 1-value);
}


button2.setControlCallback(onseq1type2Control);



const var button3 = Content.getComponent("seq1type3");
const var table3 = Content.getComponent("ScriptTable3");
const var step3 = Content.getComponent("SliderPackA3");
const var s3 = Synth.getModulator("s3");
const var seq1type3 = Content.getComponent("seq1type3");


inline function onseq1type3Control(component, value)
{

        step3.showControl(value);
        table3.showControl(1-value); 
        s3.setAttribute(s3.type, 0);
        s3.setAttribute(s3.type, 1-value);
};

Content.getComponent("seq1type3").setControlCallback(onseq1type3Control);




const var button4 = Content.getComponent("seq1type4");
const var table4 = Content.getComponent("ScriptTable4");
const var step4 = Content.getComponent("SliderPackA4");
const var s4 = Synth.getModulator("s4");


inline function onseq1type4Control(component, value)
{

        step4.showControl(value);
        table4.showControl(1-value); 
        s4.setAttribute(s4.type, 0);
        s4.setAttribute(s4.type, 1-value);
};

Content.getComponent("seq1type4").setControlCallback(onseq1type4Control);


const var button5 = Content.getComponent("seq1type5");
const var table5 = Content.getComponent("ScriptTable5");
const var step5 = Content.getComponent("SliderPackA1");
const var s5 = Synth.getModulator("s5");


inline function onseq1type5Control(component, value)
{
  step5.showControl(value);
        table5.showControl(1-value); 
        s5.setAttribute(s5.type, 0);
        s5.setAttribute(s5.type, 1-value);
};

Content.getComponent("seq1type5").setControlCallback(onseq1type5Control);



const var button6 = Content.getComponent("seq1type6");
const var table6 = Content.getComponent("ScriptTable6");
const var step6 = Content.getComponent("SliderPackA5");
const var s6 = Synth.getModulator("s6");

inline function onseq1type6Control(number, value)
{
        step6.showControl(value);
        table6.showControl(1-value); 
        s6.setAttribute(s6.type, 0);
        s6.setAttribute(s6.type, 1-value);
}

Content.getComponent("seq1type6").setControlCallback(onseq1type6Control);

const var button7 = Content.getComponent("seq1type7");
const var table7 = Content.getComponent("ScriptTable7");
const var step7 = Content.getComponent("SliderPackA6");
const var s7 = Synth.getModulator("s7");

inline function onseq1type7Control(number, value)
{
        step7.showControl(value);
        table7.showControl(1-value); 
        s7.setAttribute(s7.type, 1-value);
        s7.setAttribute(s7.type, 0);
}


Content.getComponent("seq1type7").setControlCallback(onseq1type7Control);

const var button8 = Content.getComponent("seq1type8");
const var table8 = Content.getComponent("ScriptTable8");
const var step8 = Content.getComponent("SliderPackA7");
const var s8 = Synth.getModulator("s8");

inline function onseq1type8Control(number, value)
{
        step8.showControl(value);
        table8.showControl(1-value); 
        s8.setAttribute(s8.type, 0);
        s8.setAttribute(s8.type, 1-value);
}

Content.getComponent("seq1type8").setControlCallback(onseq1type8Control);

const var button9 = Content.getComponent("seq1type9");
const var table9 = Content.getComponent("ScriptTable9");
const var step9 = Content.getComponent("SliderPackA8");
const var s9 = Synth.getModulator("s9");

inline function onseq1type9Control(number, value)
{
        step9.showControl(value);
        table9.showControl(1-value); 
        s9.setAttribute(s9.type, 0);
        s9.setAttribute(s9.type, 1-value);
}

Content.getComponent("seq1type9").setControlCallback(onseq1type9Control);

const var button10 = Content.getComponent("seq1type10");
const var table10 = Content.getComponent("ScriptTable10");
const var step10 = Content.getComponent("SliderPackA9");
const var s10 = Synth.getModulator("s10");

inline function onseq1type10Control(number, value)
{
        step10.showControl(value);
        table10.showControl(1-value); 
        s10.setAttribute(s10.type, 0);
        s10.setAttribute(s10.type, 1-value);
}


Content.getComponent("seq1type10").setControlCallback(onseq1type10Control);

const var button11 = Content.getComponent("seq1type11");
const var table11 = Content.getComponent("ScriptTable11");
const var step11 = Content.getComponent("SliderPackA10");
const var s11 = Synth.getModulator("s11");

inline function onseq1type11Control(number, value)
{
        step11.showControl(value);
        table11.showControl(1-value); 
        s11.setAttribute(s11.type, 0);
        s11.setAttribute(s11.type, 1-value);
}


Content.getComponent("seq1type11").setControlCallback(onseq1type11Control);



const var button12 = Content.getComponent("seq1type12");
const var table12 = Content.getComponent("ScriptTable12");
const var step12 = Content.getComponent("SliderPackA11");
const var s12 = Synth.getModulator("s12");

inline function onseq1type12Control(number, value)
{
        step12.showControl(value);
        table12.showControl(1-value); 
        s12.setAttribute(s12.type, 0);
        s12.setAttribute(s12.type, 1-value);
}


Content.getComponent("seq1type12").setControlCallback(onseq1type12Control);

//links

const var ulp = Content.getComponent("ULPbox");


ulp.setMouseCallback(function(event)
{
  if (event.clicked)
  {
    Engine.openWebsite("https://modularsamples.gumroad.com/l/TdDvx");
  } 
  else 
  {
    link_hover = event.hover;
    this.repaint();
  }
});

const var yop = Content.getComponent("YOPbox");


yop.setMouseCallback(function(event)
{
  if (event.clicked)
  {
    Engine.openWebsite("https://modularsamples.gumroad.com/l/gyckl");
  } 
  else 
  {
    link_hover = event.hover;
    this.repaint();
  }
});


//xfade

const var XF = Content.getComponent("xfade");
const var xfade = Synth.getModulator("xfade");
const var xf1 = Synth.getEffect("xf1");
const var xf2 = Synth.getEffect("xf2");
const var xf3 = Synth.getEffect("xf3");
const var xf4 = Synth.getEffect("xf4");
const var XFcont = Content.getComponent("XFcont");


inline function onxfadeControl(component, value)
{
	XFcont.showControl(1-value); 
	XFcont.showControl(value);

	xf1.setBypassed(1 -value);
	xf2.setBypassed(1 -value);
	xf3.setBypassed(1 -value);
	xf4.setBypassed(1 -value);
	xfade.setBypassed(1 -value);
};

Content.getComponent("xfade").setControlCallback(onxfadeControl);


const var pages = [];

pages[0] = Content.getComponent("GranularVoices");
pages[1] = Content.getComponent("mix");
pages[2] = Content.getComponent("settings");

const var PAGES = Content.getComponent("PAGES");

inline function onPAGESControl(component, value)
{
for (i = 0; i < pages.length; i++)
        pages[i].fadeComponent(value - 1 == i, 500);
};

Content.getComponent("PAGES").setControlCallback(onPAGESControl);

function onNoteOn()
{
	// the index is zero based like everything else in good
	// programming, so we need to add one to get the actual
	// channel number
	local d = rrIndex+1;
	
	// Store the value in the MIDIList for the note on
	EventIdStack.push(noteOnChannels, Message.getEventId(), d);
	Console.print(d);
	Message.setChannel(d);
	
	// Cycle through the round robin amount
	if(rrIndex++ >= 4)
	    rrIndex = 1;
}
 
function onNoteOff()
{
    local c = EventIdStack.pop(noteOnChannels, Message.getEventId());
	Message.setChannel(c);
    
}
 function onController()
{
	
}
 function onTimer()
{
	
}
 function onControl(number, value)
{
	
}
 