var fs = require("fs")
writerStream = fs.createWriteStream('output[1].txt');
readerStream = fs.createReadStream('output.txt').pipe(writerStream);