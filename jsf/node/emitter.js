var events = require('events');
var emitter = new events.EventEmitter();

emitter.addListener('ready', function(){
	console.log("Emitter Ready");
});

emitter.addListener('complete', function(){
	console.log("Program is now Terminating");
});
emitter.emit('ready');
emitter.emit('complete');