var fs = require('fs');
fs.open('myTempFile.txt', 'w', function (err, file) {
	if(err) throw err;
	console.log("myTempFile.txt created");
})

deleteFile = function() {
	fs.unlink('./myTempFile.txt',function() {
		console.log("myTempFile.txt Deleted");
	});	
};
setTimeout(deleteFile, 2500);