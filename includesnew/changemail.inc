<?php 
    session_start(); 
    include('conexion.php'); // incluímos los datos de conexión a la BD 
    if(isset($_SESSION['usuario_nombre'])) { // comprobamos que la sesión esté iniciada 
        if(isset($_POST['enviar'])) { 
            if($_POST['usuario_email'] != $_POST['usuario_email_conf']) { 
                echo "Los emails ingresados no coinciden. <a href='javascript:history.back();'>Reintentar</a>"; 
            }else { 
                $usuario_nombre = $_SESSION['usuario_nombre']; 
                $usuario_email = mysql_real_escape_string($_POST["usuario_email"]);
                $sql = mysql_query("UPDATE usuarios SET usuario_email='".$usuario_email."' WHERE usuario_nombre='".$usuario_nombre."'"); 
                if($sql) { 
                    echo "<div class='posts_l'><a class='post_title'> Tu Email ha sido cambiado </a>
					<br />
					La email ha sido cambiado correctamente. 
                   Este cambio tiene efecto en la web por lo cual tu email esta cambiado en solo ese sitio.
<br/>
<br/>
<br/>
					Si no ha sido así mande un post al foro de soporte tecnico
					de Reign of norrath para que nosotros lo arreglemos en el menor tiempo posible.
					<br/>
					<br/>
					<i> Atentamente </i>
					
<br/>

<br/>
					La Administración de Reign of Norrath
					<br/>
					<br/>
					<br/>
					<a href='index.php'> 
					<button> Volver al Inicio </button>
					</a>
					</div>
					"; 
                }else { 
                    echo "Error: No se pudo cambiar el email. <a href='javascript:history.back();'>Reintentar</a>"; 
                } 
            } 
        }else { 
?> 

<div class="posts_l"><a class="post_title"> Modificar Email <?php echo $_SESSION['usuario_nombre'];?>  </a>
<br/>
<br/>
<b> Al modificar el Email estas modificando los datos de contacto de nuestro boletín de noticias , asegurate que una vez cambiado lo guardes
en un sitío seguro </b>

<br/>
<br/>
        <form action="<?=$_SERVER['PHP_SELF']?>" method="post"> 
        <label>Nueva Email:</label><br /> 
        <input type="text"  class="form-control" name="usuario_email" maxlength="255" /><br /> 
        <label>Confirmar Email:</label><br /> 
        <input type="text"  class="form-control" name="usuario_email_conf" maxlength="255" /><br /> 
            <input type="submit" name="enviar" class="btn btn-lg btn-info"  value="Enviar" /> 
        </form> 
		</div>
<?php 
        } 
    }else { 
        echo "Acceso denegado."; 
    } 
?>