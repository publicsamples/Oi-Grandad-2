// Create a network for offline processing 
// (make sure that the script FX is bypassed)
const var dsp = Engine.createDspNetwork("dsp") ;

// manually call the initialisation
dsp.prepareToPlay(44100.0, 512);

// create a buffer array
const var channels = [Buffer.create(512), Buffer.create(512)];

// process the DSP network offline
dsp.processBlock(channels);

// Analyse the buffer
for(s in channels[0])
      Console.print(s);
      
     const audio = Engine.createAndRegisterAudioFile(0);
     

 function prepareToPlay(sampleRate, blockSize)
{
	
}
 function processBlock(channels)
{
	
}
 function onControl(number, value)
{
	
}
 