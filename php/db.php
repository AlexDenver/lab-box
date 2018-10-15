<!DOCTYPE html>
<html>
<head>
	<title></title>
</head>
<body>	
<?
	
	$con = new mysqli("localhost", "root", "", "db");
	// if($con)
	// 	die("Not Connected");

	$rs = $con->query("SELECT * FROM student");
	if(!$rs)
		die("Error Occured");


	while($row = $rs->fetch_assoc()){

		echo $row['usn']." - ". $row['name'] ."</br>";	
	}


?>
	<h1>Hello</h1>
</body>
</html>

	









































</body>
</html>