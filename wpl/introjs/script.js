var iBox = document.getElementById("num");
iBox.addEventListener('input', function(e){
	n = num = parseInt(e.target.value);
	fact = 1;
	while(n>1){
		fact*=n--;			
	}
	document.getElementById("pnum").innerHTML = num | '';
	document.getElementById("factor").innerHTML = fact | '';
});