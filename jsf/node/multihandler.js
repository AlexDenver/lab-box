var events = require('events');	
var emitter = new events.EventEmitter();

complete = function(){
	console.log("Program is now Terminating");
};
ready = function(){
	console.log("Emitter Ready");
};
exec = function() {
	console.log("Second Handler");
};
emitter.addListener('ready', ready);
emitter.addListener('ready', exec);
emitter.addListener('complete', complete);
emitter.emit('ready');
emitter.emit('complete');
console.log(emitter);
console.log('There are',emitter.listenerCount('ready'), 'Event Handlers for Ready Event');
console.log('There are',emitter.listenerCount('complete'), 'Event Handlers for Complete Event');