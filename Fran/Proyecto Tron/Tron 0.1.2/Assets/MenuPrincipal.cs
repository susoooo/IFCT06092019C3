using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class MenuPrincipal : MonoBehaviour
{
    void Start()
    {
        
    }
    void Update()
    {
        
    }

    public void ModoJuego()
    {
        SceneManager.LoadScene("Juego");
    }

    public void CargarEscena(string nombreEscena)
    {
        SceneManager.LoadScene(nombreEscena);
    }

    public void Salir()
    {
        Application.Quit();
    }


}
