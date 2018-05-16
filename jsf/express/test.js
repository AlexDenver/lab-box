express = require('express');
app = express();
var fs = require("fs")
//console.log(app);
path    = require("path");
var bodyParser = require("body-parser");
app.use(bodyParser());

app.use(express.static(__dirname));

app.get('/', function (req, res) {
  res.sendfile('index.html');
})

app.get('/home', function (req, res) {
  res.send('Welcome Home!');  
})

app.get('/about', function (req, res) {
  about = "Express.js, or simply Express, is a web application framework for Node.js, released as free and open-source software under the MIT License. It is designed for building web applications and APIs. It has been called the de facto standard server framework for Node.js."
  //console.log(res);
  res.send(about);
})

app.post('/form', function (req, res) {
	res.type('html');
	// res.send(req.body);
	data = `Server Running on ${req.headers.host}`;
	console.log(res);
	// res.write(data);
	if(req.body.usn=='user' && req.body.pwd=='pass'){
		if(req['body'].login)
				res.send("<h1>Login Successful");
		else
				res.send("<script>alert('Login Successful');</script>");
	}else{
		if(req.body.login)
				res.send("<h1>Login Failed");
		else
				res.send("<script>alert('Login Failed');</script>");
	}

})
.listen(1090);

