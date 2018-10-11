<!DOCTYPE html> 
<html>
   <head>
      <title></title>
   </head>
   <body>
      <?php if(!$_POST){     ?>         
      <form method="POST">
         <input type="number" name="n1">                      
         <input type="submit"> 
      </form>
      <?     
      }else{         
      function fibi($a, $b, $n) { 
         static $count; 
         if($n==$count)                 
            return; 
         else{                 
            echo ' '.$a;
            $count++;
            fibi($b,$a+$b,$n); 
         }         
      }
         $x = $_POST['n1'];
         echo "<h3>$x Fibinocci Numbers Are;</h3><strong>";
   		fibi(0,1,$x);
   	}
   	?>
   </body>
</html>