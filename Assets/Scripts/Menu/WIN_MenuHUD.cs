using Mirror;
using UnityEngine;
using UnityEngine.UI;

public class WIN_MenuHUD : MonoBehaviour
{
    private NetworkManager netManager;
    public Text ipText;
    
    private void Start()
    {
        netManager = GameObject.Find("NetworkManager").GetComponent<NetworkManager>();
    }

    public void ConnectToTheServer()
    {
        netManager.networkAddress = ipText.text;
        netManager.StartClient();
    }
}
