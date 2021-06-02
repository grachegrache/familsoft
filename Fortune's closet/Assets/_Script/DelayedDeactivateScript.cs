using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DelayedDeactivateScript : MonoBehaviour {
    Coroutine coroutine;

    public void delayedDeactivate(GameObject target) {
		delayedDeactivate (target, 3f);
    }
    
    public void delayedDeactivate(GameObject target, float delay) {
        if(coroutine != null){
            StopCoroutine(coroutine);
            coroutine = null;
        }
        coroutine = StartCoroutine(deactivate(target, delay));
    }

    IEnumerator deactivate(GameObject target){
		return deactivate (target, 3f);
    }
    
    IEnumerator deactivate(GameObject target, float delay){
        yield return new WaitForSeconds(delay);
        target.SetActive(false);
        coroutine = null;
    }
}
