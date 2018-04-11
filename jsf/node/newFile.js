var fs = require('fs');

fs.open('mynewfile2.txt', 'w', function (err, file) {
	if (err) throw err; 
 // fs.write(file,"Hello World!",function(err,charCount) {
 // 	console.log(charCount);
 // });
	console.log('Saved!');
}); 



// var http = require('http');
// http.createServer(function (req, res) {
//     res.writeHead(200, {'Content-Type': 'text/json'});
//     res.write(JSON.stringify(fs));
// 	console.log(res);

// 	res.end('');

// }).listen(8080);	