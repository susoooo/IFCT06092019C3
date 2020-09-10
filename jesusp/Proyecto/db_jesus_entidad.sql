-- MySQL dump 10.13  Distrib 8.0.21, for Win64 (x86_64)
--
-- Host: localhost    Database: db_jesus
-- ------------------------------------------------------
-- Server version	8.0.21

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `entidad`
--

DROP TABLE IF EXISTS `entidad`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `entidad` (
  `id` int NOT NULL,
  `texto` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `entidad`
--

LOCK TABLES `entidad` WRITE;
/*!40000 ALTER TABLE `entidad` DISABLE KEYS */;
INSERT INTO `entidad` VALUES (1,'sijfl'),(2,'DNI:34567890Y'),(3,'Masa:'),(4,'Masa:'),(5,'Masa:'),(6,'Masa:  hiperextramegafina Ingredientes: Grelos 0.6 Chourizo 1.3 Jam�n 2.7 Queso 0.5 5.1�1234'),(7,'Masa: extrafina Ingredientes: Jam�n 2.7 Queso 0.5 Pi�a 1.3 Polbo 4 8.5�1234'),(8,'Masa: hiperextramegafina Ingredientes: Chourizo 1.3 Morcilla 3.6 Lubrigante 4.11 Pi�a 2.5 Polbo 8 19.51�'),(9,'Masa: extrahiperfina Ingredientes: Chourizo 1.3 Morcilla 3.6 Lubrigante 4.11 Pi�a 2.5 11.51� Descuento:.10'),(10,'Masa: hiperextramegafina Ingredientes: Grelos 0.8 Queso 0.5 Morcilla 3.6 Lubrigante 4.11 Pi�a 2.5 Polbo 8 19.51� Descuento:0 19.51�'),(11,'Masa: hiperextramegafina Ingredientes: Chourizo 1.3 Morcilla 3.6 Lubrigante 4.11 Chistorra 2.03 11.04� Descuento:0 11.04�'),(12,'DNI:21345678I Nombre:Ernesto Apellidos: Villamil Portas Direcci�n: C/Lubrigante 8 Lugo Telefono:654789012 Masa: megaextrafina Ingredientes: Chourizo 1.3 Morcilla 3.6 Lubrigante 9.11 Pi�a 2.5 Polbo 10 28.21� Descuento:.20 22.57�'),(13,'DNI:12456789Y Nombre: Armando Apellidos: D�az Ayuso Direcci�n: C\\ San Roque 186 Lugo Telefono:623456347 Masa: extrafina Ingredientes: Chourizo 1.3 Morcilla 3.6 Lubrigante 9.11 Pi�a 2.5 Polbo 10 PrecioGlobaL: 28.46� Descuento:.20 PrecioFinal: 22.77�'),(16,'DNI:98712345W Nombre: Alicia Apellidos: Pais Maravillas Direcci�n: C/ Buenos Aires 23 Ourense Telefono: 657657756 Masa: fina Ingredientes: Chourizo 1.3 Queso 2.5 Lubrigante 9.11 Pi�a 1.1 Polbo 8.5 PrecioGlobaL: 24.96� Descuento:.20 PrecioFinal: 19.97�'),(17,'DNI:98712345W Nombre: Alicia Apellidos: Pais Maravillas Direcci�n: C/ Buenos Aires 23 Ourense Telefono: 657657756 Masa: fina Ingredientes: Chourizo 1.3 Queso 2.5 Lubrigante 9.11 Pi�a 1.1 Polbo 8.5 PrecioGlobaL: 24.96� Descuento:.20 PrecioFinal: 19.97�'),(18,'DNI:21345678I Nombre:Alfonso Apellidos: Grande Lino Direccion:C/ Avda Madrid 76 Pontevedra Telefono: 612345678 Masa: hiperextramegafina Ingredientes: Chourizo 1.3 Jam�n 2.7 Queso 2.5 Morcilla 2.6 PrecioGlobaL: 10.4� Descuento:.10 PrecioFinal: 9.36�'),(19,'DNI:23416734M Nombre:Lucia Apellidos: Ron Negro Direccion: C/ Canton Grande 12 A Corunha Telefono: 634456888 Masa: hiperfina Ingredientes: Chourizo 1.3 Queso 2.5 Morcilla 2.6 Champi��n 0.4 Maracuy� 5.3 PrecioGlobaL: 14.3� Descuento:.25 PrecioFinal: 10.72�');
/*!40000 ALTER TABLE `entidad` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2020-09-10  9:48:24
