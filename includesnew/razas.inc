       <?      
		
if(isset($_GET['noticia']))

{

    if(!empty($_GET['noticia'])) // Si el valor de "noticia" no es NULL, continua con el proceso

    {

        $id_noticia = (int) mysql_real_escape_string($_GET['noticia']);

        $query_noticias2 = mysql_query("SELECT * FROM ".$db_prefix._.$db_table." WHERE id = ".$id." LIMIT 1");

        if(mysql_num_rows($query_noticias2) > 0) // Si existe la noticia, la muestra

        {

            while($columna = mysql_fetch_assoc($query_noticias2)) // Realizamos un bucle que muestre todas las noticias, utilizando while.

            {

                echo '


					<div class="posts_l"><a class="post_title">'.$columna['titulo'].'</a><br />

                        <div class="post_by">Escrito por '.$columna['autor'].' publicado el '.$columna['fecha'].'</div>

						<div class="post_div"></div><br/> 

                        <div class="post_txt">'.$columna['mensaje'].'</div><p />

						<a href="/index.php">
						<button>Volver al inicio</button>
                        </a>
						</div>

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

        echo 'Debes seleccionar una noticia.'; // Si GET no recibe ningÃºn valor, muestra un error

    }

}

else

{

    $query_noticias = mysql_query("SELECT * FROM ".$db_prefix._.$db_razas." ORDER BY id DESC"); // Ejecutamos la consulta


    while($columna = mysql_fetch_assoc($query_noticias)) // Realizamos un bucle que muestre todas las noticias, utilizando while.

    {

        echo '

       <div class="posts_l"><a class="post_title">'.$columna['Nombre'].'</a><br />


<table>

          <table width="500" border="0"> 
  <tr> 
    <td colspan="3"></td>     
  </tr> 

  <tr>     

    <td style="right:inherit">  <div class="post_txt">'.$columna['Descripción'].'</div> <p />  </td> 
  </tr> 



         



</table>
						</div>


        ';

    }

}

?>
              