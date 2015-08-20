       <?      
		
if(isset($_GET['noticia']))

{

    if(!empty($_GET['noticia'])) // Si el valor de "noticia" no es NULL, continua con el proceso

    {

        $id_noticia = (int) mysql_real_escape_string($_GET['noticia']);

        $query_noticias2 = mysql_query("SELECT * FROM ".$db_prefix._.$db_noticias." WHERE id = ".$id." LIMIT 1");

        if(mysql_num_rows($query_noticias2) > 0) // Si existe la noticia, la muestra

        {

            while($columna = mysql_fetch_assoc($query_noticias2)) // Realizamos un bucle que muestre todas las noticias, utilizando while.

            {

                echo '

	<div class="content-post">
	  <div class="content-heading">  
	  <div class="news-title">'.$columna['titulo'].'</div>
	    <div class="author">Escrito por <a href="#">'.$columna['autor'].'</a> el '.$columna['fecha'].'</div>
	    <div class="comments"><a href="#">Proximamente</a></div>
	  </div>
	  <div class="news-post"> 
	    <div class="avatar"><img src="images/ava2.png" width="140" height="" alt="264" /></div>
	    <div class="post-content">
	     
	     '.$columna['mensaje'].'
		 </div>
	    <div class="readmore-fix"> <!-- readmore-fix needed to space button appropriately because of use of image sprite -->
	   	 <a href="#"><div class="readmore"><div class="readmore-text">read more</div></div></a>
	    </div>
	  </div> 
	</div> 
<div class="clear"></div>
                ';

            }

        }

        else

        {

            echo 'La noticia que solicitas, no existe.'; // Si no, muestra un error

        }

    }

    else

    {

        echo 'Debes seleccionar una noticia.'; // Si GET no recibe ningún valor, muestra un error

    }

}

else

{

    $query_noticias = mysql_query("SELECT * FROM ".$db_prefix._.$db_noticias." ORDER BY id DESC"); // Ejecutamos la consulta

  /*$limite = 200; // Número de carácteres a mostrar antes de el "Leer más"*/

    while($columna = mysql_fetch_assoc($query_noticias)) // Realizamos un bucle que muestre todas las noticias, utilizando while.

    {

        echo '
	<div class="content-post">
	  <div class="content-heading">
	    <div class="news-title">'.$columna['titulo'].'</div>
	    <div class="author">Escrito por <a href="#">'.$columna['autor'].'</a> el '.$columna['fecha'].'</div>
	    <div class="comments"><a href="#">Proximamente</a></div>
	  </div>
	  <div class="news-post"> <!-- start news-post -->
	 
	    <div class="post-content">
	     '.$columna['mensaje'].'
		 </div>
	    <div class="readmore-fix"> <!-- readmore-fix needed to space button appropriately because of use of image sprite -->
	   	 <a href="#"><div class="readmore"><div class="readmore-text">read more</div></div></a>
	    </div>
	  </div> 
	</div> 
<div class="clear"></div>
        ';

    }

}

?>
              