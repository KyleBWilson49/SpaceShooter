using UnityEngine;
using System.Collections;

public class GameController : MonoBehaviour {
	public GameObject[] hazards;
	public Vector3 spawnValues;
	public int hazardCount;
	public float spawnWait;
	public float startWait;
	public float waveWait;
	private int waveNumber;

	public GUIText restartText;
	public GUIText gameOverText;
	public GUIText scoreText;

	private int score;
	private bool gameOver;
	private bool restart;

	void Start () {
		gameOver = false;
		restart = false;
		restartText.text = "";
		gameOverText.text = "";
		waveNumber = 0;
		score = 0;
		UpdateScore ();
		StartCoroutine (SpawnWaves ());
	}

	void Update () {
		if (restart) {
			if (Input.GetKeyDown (KeyCode.R)) {
				Application.LoadLevel (Application.loadedLevel);
			}
		}
	}

	IEnumerator SpawnWaves () {
		yield return new WaitForSeconds (startWait);

		while (true) {
			waveNumber += 1;

			for (int i = 0; i < hazardCount; i++) {
				GameObject hazard = hazards[Random.Range(0, hazards.Length)];
				Vector3 spawnPosition = new Vector3 (Random.Range (-spawnValues.x, spawnValues.x), spawnValues.y, spawnValues.z);
				Quaternion spawnRotation = Quaternion.identity;

				Instantiate (hazard, spawnPosition, spawnRotation);

				yield return new WaitForSeconds (spawnWait);
			}

			UpdateWave ();

			yield return new WaitForSeconds (waveWait);

			if (gameOver) {
				restartText.text = "Press 'R' for Restart";
				restart = true;
				break;
			}
		}
	}

	void UpdateScore () {
		scoreText.text = "Score: " + score;
	}

	public void AddScore (int newScoreValue) {
		score += newScoreValue * waveNumber;
		UpdateScore ();
	}

	void UpdateWave () {
		hazardCount = (int)(Mathf.Floor ((float)hazardCount * 1.2f));
		spawnWait = spawnWait * .95f;
	}

	public void GameOver () { 
		gameOverText.text = "Game Over!";
		gameOver = true; 
	}
}
