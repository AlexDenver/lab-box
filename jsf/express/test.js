app = require('express')();
http = require('http');
//console.log(app);

app.get('/', function (req, res,next) {
  res.send('Hello from A!');
  next();
}).listen(1090)
