<html>
<form method="post"><center>
<HEAD> <CENTER><H1>INSERTING NEW RECORD TO BOOK DATABASE</H1></HEAD>
<pre>
Enter the Accession number:  <INPUT TYPE="text" NAME ="ACCNUM" ><br />
Enter the Book title:        <INPUT TYPE="text" NAME ="TITLE" ><br />
Enter the Author:            <INPUT TYPE="text" NAME ="AUTHOR" ><br />
Enter the Edition:           <INPUT TYPE="text" NAME ="EDITION" ><br />
Enter the Publisher:         <INPUT TYPE="text" NAME ="PUBLISHER" ><br />
</pre>
<? //$datetime = now(); echo strtotime($datetime, time()); ?>
<INPUT TYPE ="SUBMIT" VALUE ="INSERT NEW RECORD">   <INPUT TYPE ="RESET" VALUE ="CLEAR FIELDS">
</form>
<?php
	error_reporting(E_ERROR);
	$username = "root";
	$password = "";
	$hostname = "localhost";
	$con = mysqli_connect($hostname, $username, $password, "Book1") or die("Unable to connect to MySQL");
	if ($_POST) { 
		$a  = $_POST['ACCNUM'];
		$t  = $_POST['TITLE'];
		$au = $_POST['AUTHOR'];
		$e  = $_POST['EDITION'];
		$p  = $_POST['PUBLISHER'];
		if (($a != "") && ($t != "") && ($au != "") && ($e != "") && ($p != "")) {
			$result = mysqli_query($con, "Insert into Book values ('$a','$t','$au','$e','$p')") or die("YOUR ENTER A INVALID QUERY");			
		}	
	}

	$result = mysqli_query($con,"Select * from Book;");
	print " <table border='1' cellpadding=20 style='margin-top: 50px;'> <tr>";

	while($field = mysqli_fetch_field($result)){
		print "<th>" . $field->name . "</th>";
	}

	print "</tr>";
	// print values
	while ($row = mysqli_fetch_array($result)) {

		print "<tr>";
		print "<td>" . $row[0] . "</td>";
		print "<td>" . $row[1] . "</td>";
		print "<td>" . $row[2] . "</td>";
		print "<td>" . $row[3] . "</td>";
		print "<td>" . $row[4] . "</td>";
		print "</tr>";

	}	


	mysqli_close($con);
?>