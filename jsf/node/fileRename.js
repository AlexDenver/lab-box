var fs = require('fs');
fs.rename('./mynewfile3.txt','./mynewfile.txt',function() {	 	
	console.log('Renamed!');
});

