buffer = new Buffer(10); 
buffer.write("abc");
console.log(buffer.toString(), "in buffer is",buffer.toJSON().data);
