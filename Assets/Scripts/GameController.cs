using UnityEngine;
using System.Collections;

public class GameController : MonoBehaviour {
	public GameObject hazard;
	public Vector3 spawnValues;
	public int hazardCount;
	public float spawnWait;
	public float startWait;
	public float waveWait;
	private int waveNumber;

	public GUIText scoreText;
	private int score;

	void Start () {
		waveNumber = 0;
		score = 0;
		UpdateScore ();
		StartCoroutine (SpawnWaves ());
	}

	IEnumerator SpawnWaves () {
		yield return new WaitForSeconds (startWait);

		while (true) {
			waveNumber += 1;

			for (int i = 0; i < hazardCount; i++) {
				Vector3 spawnPosition = new Vector3 (Random.Range (-spawnValues.x, spawnValues.x), spawnValues.y, spawnValues.z);
				Quaternion spawnRotation = Quaternion.identity;

				Instantiate (hazard, spawnPosition, spawnRotation);

				yield return new WaitForSeconds (spawnWait);
			}

			UpdateWave ();

			yield return new WaitForSeconds (waveWait);
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
}
