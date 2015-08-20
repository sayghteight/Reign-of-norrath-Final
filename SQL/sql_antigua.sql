/*Table structure for table `Estado` */

DROP TABLE IF EXISTS `Estado`;

CREATE TABLE `Estado` (
  `id` char(25) DEFAULT NULL,
  `Nombre` char(255) DEFAULT 'Default',
  `IP` char(255) DEFAULT NULL,
  `Port` char(25) DEFAULT NULL,
  `Estado online` char(255) DEFAULT 'Online',
  `Estado offline` char(255) DEFAULT 'Offline'
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

/*Data for the table `Estado` */

/*Table structure for table `usuarios` */

DROP TABLE IF EXISTS `usuarios`;

CREATE TABLE `usuarios` (
  `usuario_id` int(4) NOT NULL AUTO_INCREMENT,
  `usuario_nombre` varchar(15) NOT NULL DEFAULT '',
  `usuario_clave` varchar(32) NOT NULL DEFAULT '',
  `usuario_email` varchar(50) NOT NULL DEFAULT '',
  `usuario_rango` varchar(50) NOT NULL DEFAULT 'user',
  `usuario_freg` datetime NOT NULL DEFAULT '0000-00-00 00:00:00',
  `usuario_estado` enum('Activo','Suspendido','','') DEFAULT 'Activo',
  PRIMARY KEY (`usuario_id`)
) ENGINE=InnoDB AUTO_INCREMENT=10 DEFAULT CHARSET=utf8;

/*Data for the table `usuarios` */

insert  into `usuarios`(`usuario_id`,`usuario_nombre`,`usuario_clave`,`usuario_email`,`usuario_rango`,`usuario_freg`,`usuario_estado`) values (1,'perioner1','7b8e7b0f084ec0ac5fda8eabc030f923','duelista16@gmail.com','admin','2015-02-04 22:39:10','Activo'),(2,'Hydrox','c2dfe06e3f74ef2607b49e35e4c5d325','adrianaguilarsosa@gmail.com','user','2015-02-04 23:42:58','Activo'),(3,'Nemesys','fba9e92a46428f394643ee9e8ca7f462','1234@hotmail.com','user','2015-02-04 23:55:08','Activo'),(5,'beta','7b8e7b0f084ec0ac5fda8eabc030f923','soloptc22@gmail.com','user','2015-02-06 16:31:11','Activo'),(6,'Azumo','fd7be76e9a881dc4f7a1a72241d0dc39','azumosoken@gmail.com','user','2015-02-07 14:06:15','Activo'),(7,'Davigassmen','d1fa6da158b05f36ed03e381e9f43517','said_gracia_13@hotmail.com','user','2015-02-07 21:32:15','Activo'),(9,'demo1','7b8e7b0f084ec0ac5fda8eabc030f923','demo@demo.com','user','2015-05-23 17:40:06','Activo');

/*Table structure for table `web20_noticias` */

DROP TABLE IF EXISTS `web20_noticias`;

CREATE TABLE `web20_noticias` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `titulo` varchar(100) CHARACTER SET utf8 COLLATE utf8_bin NOT NULL DEFAULT 'No Hay Titulo',
  `autor` varchar(50) NOT NULL DEFAULT 'Desconocido',
  `mensaje` varchar(1000) CHARACTER SET utf8 COLLATE utf8_bin NOT NULL DEFAULT 'No Hay Mensaje',
  `fecha` date NOT NULL,
  `Categoria` char(255) DEFAULT 'website',
  PRIMARY KEY (`id`)
) ENGINE=MyISAM AUTO_INCREMENT=6 DEFAULT CHARSET=latin1;

/*Data for the table `web20_noticias` */

insert  into `web20_noticias`(`id`,`titulo`,`autor`,`mensaje`,`fecha`,`Categoria`) values (1,'[WebSite] Información de la Web','Reign of Norrath','<b> Estimados Usuarios </b>\r\n\r\n<p> Sere breve estamos teniendo problemas con el GET de la web y lo estamos arreglando . Algunas noticias no podran ser leidas enteras </p>','2015-01-05','Web'),(2,'[WebSite] Informaciones de la Web','Reign of Norrath','<strong> Buenas Usuarios </strong> \r\n\r\nTraemos nuevas noticias respecto a la web . Esto es visible desde hace unas horas .\r\n<ul>\r\n<li> Desabilitado el Boton de Leer Mas </li>\r\n<li> Arreglado las Comas y simbolos de Interrogación</li>\r\n<li> Nuevo estilo en el recuadro de bienvenida</li>\r\n</ul>\r\n\r\nCon esto nos retiramos . Sin antes decir que mañana agregaremos una nueva sección a la web.\r\n','2015-01-05','Website'),(3,'[WebSite] Update','Reign of Norrath','<b> Estimados Usuarios </b>\r\n\r\n<i> Hace unos días que no verán nada publicado en el sitio principal pero si que hay cambios y errores de SQL que se han ido arreglando</i>\r\n\r\n<p> Esto es para informarles que todos los cambios están registrados en el foro principal y que se actualiza con cada FIX que se hace por muy pequeño que sea</p>\r\n\r\n<b> Así que todo estará publicado allí , estamos trabajando en el F.A.Q y otras paginas de la web como el lore para tenerlo todo listo.</b>','2015-01-20','Website'),(4,'[WebSite] Update Beta','CEO | Ares','<strong> Estimados Usuarios </strong> <br /> <b> Les presentamos la web en fase beta de Reign of Norrath aun seguimos trabajando en ella pero pronto estara disponible al 100% de momento la pueden ver </b> <br /> <br /> Sobre el desarrollo de Reign of Norrath es verdad que hace mucho no publicamos nada tanto en web como en el foro pero es debido a que somos estudiantes y estamos en epocas de examenes. Seguimos trabajando menos que antes pero seguimos.','2015-03-04','Website'),(5,'[WebSite] Actualización Seguridad','CEO | Ares','<strong> Estimados Usuarios </strong> <br /> <b> <p> Antes de ayer se realizo un update de la web arreglando los errores que hasta ahora se han sucedido. Seguimos trabajando para mejorar nuestras webs y el foro de mientras esta totalmente offline.</p>','2015-04-18','Web - Update');

/*Table structure for table `web20_razas` */

DROP TABLE IF EXISTS `web20_razas`;

CREATE TABLE `web20_razas` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `imagen_raza` varchar(200) NOT NULL,
  `Nombre` varchar(200) NOT NULL,
  `Descripción` varchar(2500) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=utf8;

/*Data for the table `web20_razas` */

insert  into `web20_razas`(`id`,`imagen_raza`,`Nombre`,`Descripción`) values (1,'no image','Imperiales','Cuando norratus bajo a la tierra creo una raza imperfecta que recibió el nombre de Imperiales mas conocidos como Humanos. <br/>Los humanos prosperaron creando ciudades maravillosas pero la paz en el reino duraria poco debido a las frecuentes discusiones entre los nobles .</b>'),(2,'no image','Elfos','Cuando Norratus creo a los imperiales y vio las frecuentes peleas creo una Raza que se encargara de mantener el orden en Norrath esa Raza sería temida por todos los Imperiales y se llamaría los Altos Elfos expertos Arqueros y muy Diestros en el manejo de la magia. Los Altos Elfos no Adoraban aun dios en especial pero tenían un especial aprecio por la tierra y todo lo que la Tierra les podría dar.');

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;
