var events = require('events');	
var util = require('util');	
var emitter = new events.EventEmitter();
reqMade = function() {
	console.log("Lookie, a request has been made.");
};

emitter.addListener('mkReq', reqMade);
	
fs = require('fs');
http = require('http');
http.createServer(function(req, res) {	
	// if(req)		
	console.log(req);
	emitter.emit('mkReq');
	res.writeHead(200,{"Content-Type": "application/json","Access-Control-Allow-Origin": "*"});	
	a = {
		name: "Adrian",
		req: util.inspect(req)
	}
	res.write(JSON.stringify(a));
	res.end();
}).listen(8080)
console.log("Ready at:","http://localhost:8080");
