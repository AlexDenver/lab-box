var fs = require("fs")
var readerStream = fs.createReadStream('output.txt');
str = new String();
readerStream.on('data', function(data) {
	str+=data;
});

readerStream.on('end', function() {
	console.log(str);
});
