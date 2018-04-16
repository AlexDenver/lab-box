fs = require('fs');
http = require('http');
d = "";
http.createServer(function(req, res) {
	res.writeHead(200,{"Content-Type": "text/html"});
	res.write("<h1>Title</h1>");
	res.write("<p>My Paragraph</p>");
	res.end();
}).listen(8080)
console.log("Ready at:","http://localhost:8080")
