
buffer = new Buffer(10);
for (var i = buffer.length - 1; i >= 0; i--) {
	buffer[i] = 0;
};
console.log(buffer.toString(), "in buffer is",b.transcode(Buffer.from('binary','ascii')));