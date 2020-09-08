CREATE DATABASE  IF NOT EXISTS `db_proyecto` /*!40100 DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci */ /*!80016 DEFAULT ENCRYPTION='N' */;
USE `db_proyecto`;
-- MySQL dump 10.13  Distrib 8.0.21, for Win64 (x86_64)
--
-- Host: localhost    Database: db_proyecto
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
-- Table structure for table `categoria`
--

DROP TABLE IF EXISTS `categoria`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `categoria` (
  `id_cat` int NOT NULL AUTO_INCREMENT,
  `nombre_cat` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id_cat`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `categoria`
--

LOCK TABLES `categoria` WRITE;
/*!40000 ALTER TABLE `categoria` DISABLE KEYS */;
/*!40000 ALTER TABLE `categoria` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `cliente`
--

DROP TABLE IF EXISTS `cliente`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `cliente` (
  `id_cli` int NOT NULL AUTO_INCREMENT,
  `nombre_cli` varchar(255) DEFAULT NULL,
  `apellidos_cli` varchar(255) DEFAULT NULL,
  `usuario_cli` varchar(255) DEFAULT NULL,
  `contrasena_cli` varchar(255) DEFAULT NULL,
  `estado_cli` varchar(1) DEFAULT NULL,
  `email_cli` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id_cli`)
) ENGINE=InnoDB AUTO_INCREMENT=11 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `cliente`
--

LOCK TABLES `cliente` WRITE;
/*!40000 ALTER TABLE `cliente` DISABLE KEYS */;
INSERT INTO `cliente` VALUES (2,NULL,NULL,'cliente1','cliente1',NULL,'cliente1@proyecto.com'),(3,'Cliente','2','cliente2','cliente2','A','cliente2@proyecto.com'),(4,NULL,NULL,'cliente3','cliente3','A','cliente3@proyecto.com'),(5,NULL,NULL,'cliente4','cliente4','A','cliente4@proyecto.com'),(6,NULL,NULL,'cliente5','cliente5','A','cliente5@proyecto.com'),(7,NULL,NULL,'cliente6','cliente6','A','cliente6@proyecto.com'),(8,NULL,NULL,'cliente7','cliente7','A','cliente7@proyecto.com'),(9,NULL,NULL,'cliente8','cliente8','A','cliente8@proyecto.com'),(10,NULL,NULL,'cliente9','cliente9','A','cliente9@proyecto.com');
/*!40000 ALTER TABLE `cliente` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `evento`
--

DROP TABLE IF EXISTS `evento`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `evento` (
  `id_eve` int NOT NULL AUTO_INCREMENT,
  `nombre_eve` varchar(255) DEFAULT NULL,
  `direccion_eve` varchar(255) DEFAULT NULL,
  `aforo_eve` int DEFAULT NULL,
  `inicio_eve` date DEFAULT NULL,
  `fin_eve` date DEFAULT NULL,
  `estado_eve` varchar(1) DEFAULT NULL,
  `id_org` int DEFAULT NULL,
  `id_cat` int DEFAULT NULL,
  `id_pro` int DEFAULT NULL,
  PRIMARY KEY (`id_eve`),
  KEY `id_org` (`id_org`),
  KEY `id_cat` (`id_cat`),
  KEY `id_pro` (`id_pro`),
  CONSTRAINT `evento_ibfk_1` FOREIGN KEY (`id_org`) REFERENCES `organizador` (`id_org`),
  CONSTRAINT `evento_ibfk_2` FOREIGN KEY (`id_cat`) REFERENCES `categoria` (`id_cat`),
  CONSTRAINT `evento_ibfk_3` FOREIGN KEY (`id_pro`) REFERENCES `provincia` (`id_pro`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `evento`
--

LOCK TABLES `evento` WRITE;
/*!40000 ALTER TABLE `evento` DISABLE KEYS */;
/*!40000 ALTER TABLE `evento` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `organizador`
--

DROP TABLE IF EXISTS `organizador`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `organizador` (
  `id_org` int NOT NULL AUTO_INCREMENT,
  `nombre_org` varchar(255) DEFAULT NULL,
  `apellidos_org` varchar(255) DEFAULT NULL,
  `usuario_org` varchar(255) DEFAULT NULL,
  `contrasena_org` varchar(255) DEFAULT NULL,
  `estado_org` varchar(1) DEFAULT NULL,
  `cuenta_bancaria_org` varchar(255) DEFAULT NULL,
  `email_org` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id_org`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `organizador`
--

LOCK TABLES `organizador` WRITE;
/*!40000 ALTER TABLE `organizador` DISABLE KEYS */;
INSERT INTO `organizador` VALUES (1,NULL,NULL,'organizador1','organizadro1',NULL,NULL,'organizador1@proyecto.com'),(2,NULL,NULL,'organizador2','organizador2','A',NULL,'organizador2@proyecto.com');
/*!40000 ALTER TABLE `organizador` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `participa`
--

DROP TABLE IF EXISTS `participa`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `participa` (
  `id_par` int NOT NULL AUTO_INCREMENT,
  `id_eve` int DEFAULT NULL,
  `id_cli` int DEFAULT NULL,
  PRIMARY KEY (`id_par`),
  KEY `id_cli` (`id_cli`),
  KEY `id_eve` (`id_eve`),
  CONSTRAINT `participa_ibfk_1` FOREIGN KEY (`id_cli`) REFERENCES `cliente` (`id_cli`),
  CONSTRAINT `participa_ibfk_2` FOREIGN KEY (`id_eve`) REFERENCES `evento` (`id_eve`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `participa`
--

LOCK TABLES `participa` WRITE;
/*!40000 ALTER TABLE `participa` DISABLE KEYS */;
/*!40000 ALTER TABLE `participa` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `provincia`
--

DROP TABLE IF EXISTS `provincia`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `provincia` (
  `id_pro` int NOT NULL AUTO_INCREMENT,
  `nombre_pro` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id_pro`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `provincia`
--

LOCK TABLES `provincia` WRITE;
/*!40000 ALTER TABLE `provincia` DISABLE KEYS */;
/*!40000 ALTER TABLE `provincia` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `valoracion`
--

DROP TABLE IF EXISTS `valoracion`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `valoracion` (
  `id_val` int NOT NULL AUTO_INCREMENT,
  `comentario_val` varchar(255) DEFAULT NULL,
  `puntacion_val` int DEFAULT NULL,
  `id_eve` int DEFAULT NULL,
  `id_cli` int DEFAULT NULL,
  PRIMARY KEY (`id_val`),
  KEY `id_cli` (`id_cli`),
  KEY `id_eve` (`id_eve`),
  CONSTRAINT `valoracion_ibfk_1` FOREIGN KEY (`id_cli`) REFERENCES `cliente` (`id_cli`),
  CONSTRAINT `valoracion_ibfk_2` FOREIGN KEY (`id_eve`) REFERENCES `evento` (`id_eve`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `valoracion`
--

LOCK TABLES `valoracion` WRITE;
/*!40000 ALTER TABLE `valoracion` DISABLE KEYS */;
/*!40000 ALTER TABLE `valoracion` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2020-09-08 13:26:06
