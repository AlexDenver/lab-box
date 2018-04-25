fs = require('fs');
http = require('http');
http.createServer(function(req, res) {	
	res.writeHead(200,{"Content-Type": "text/html","Access-Control-Allow-Origin": "*"});
	fs.readFile("./index.html",function(err, file){
		res.write(file.toString());
		res.end();
	});	
}).listen(8080)
console.log("Ready at:","http://localhost:8080");
