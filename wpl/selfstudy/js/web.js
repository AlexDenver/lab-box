a = 4;
setInterval(function () {
  console.log('Woker Message');
  a=a+2;
  var workerResult=a;
  console.log('Posting message back to main script');
  postMessage(workerResult);
},5000)
