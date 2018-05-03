buffer = new Buffer(10);
// buffer = Buffer("A");
buffer.write("Hello");
console.log("Length of buffer is",buffer.length)
console.log("Length of buffer is",buffer.size)