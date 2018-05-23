usejade=true;
const express = require('express');
const fs = require("fs")
const jade = require('jade');
const engines = require('consolidate');
const path    = require("path");
const bodyParser = require("body-parser");

app = express();
app.use(bodyParser());
app.use(express.static(__dirname+"/static"));

app.get('/', function (req, res) {
  res.sendfile('index.html');
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

app.set('view engine', 'jade')

app.get('/home',function(req,res) {
	res.render('home', {title: "My Page"});
})
app.get('/login',function(req,res) {
	res.render('form', {title: "My Page"});
})
app.get('/login/:mid([0-9]{3,8})',function(req,res) {
	res.render('form', {title: "My Page",myid:req.params.mid});
})
app.post('/result',function(req,res) {

	res.render('result', {name: req.body.name, email: req.body.email});

})



app.get('/loginj',function(req,res) {
	res.render('formj', {title: "My Page"});
})
app.get('/download/:img',function(req,res) {
	res.download(__dirname+"/static/"+req.params.img);
})

if(usejade){
	app.engine('jade', engines.jade);
	app.set('view engine', 'jade');	
}else{
	app.engine('html', engines.swig);
	app.set('view engine', 'html');	
}

app.post('/html',function(req,res) {
	res.render('htmlTemplate', {name: req.body.name, email: req.body.email});
})

app.post('/result',function(req,res) {
	res.render('result', {name: req.body.name, email: req.body.email,expr: req});
})

.listen(1090,function(err){
	if(err) throw err;
	console.log("Listening on Port http://localhost:1090");
});

