<!DOCTYPE html>
<html>
<head>
	<title></title>
</head>
<body>
<?
	$d = new DateTime();

	// FIRST VISIT
	
	if(!isset($_COOKIE['lastvisit'])){
		echo "Fresh </br>";
		setcookie("lastvisit", $d->format("d/m/y h:m:s"));
	}




	if(isset($_COOKIE["lastvisit"])){
		
		echo "Last Vist:" . $_COOKIE["lastvisit"];

		// echo "Current Time:" . $d->format("d/m/y  h:m:s");
		
		setcookie("lastvisit", $d->format("d/m/y  h:m:s"));

	} else
		echo "Fresh Login, No Previous Logins";

	// if(!isset($_COOKIE["count"])){
	// 	echo "Cookie Not Set.</br>";
	// 	setcookie("count", 0);
	// }else{
	// 	$count = (int)$_COOKIE["count"] + 1;		
	// 	setcookie("count", $count);
	// }



	// if(isset($_COOKIE["count"]))
	// 	echo "Access Count: " . $_COOKIE["count"];
	
?>
</body>
</html>