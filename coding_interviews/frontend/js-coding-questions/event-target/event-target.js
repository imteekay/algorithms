/*
Implement an EventTarget class (similar to the EventTarget interface of the DOM),
which keeps track of event listeners and dispatches events.

Your EventTarget class should have the following three methods:

addEventListener

- This function takes in two arguments: the name of an event as a string and a callback function,
to be called when the event is dispatched to the target.
- For example, target.addEventListener('click', onClick) should make it such that the onClick
callback is called when the 'click' event is dispatched to the target.
A target should be able to have multiple event listeners for the same event (for example, onClick1
and onClick2, both attached to the 'click' event). However, adding the same exact event listener
twice (with the same event and the same callback) should have no effect.

removeEventListener

- This function takes in the same arguments as addEventListener and removes the relevant event listener.
- For example, target.removeEventListener('click', onClick) should undo the effects of the addEventListener
call in the bullet point above.
- If there's no current event listener for the passed-in arguments, removeEventListener should have no effect.
Also, if two different callbacks have been added for the same 'click' event (e.g., onClick1 and onClick2),
removing one shouldn't remove the other.

dispatchEvent

- This function takes in the name of an event as a string. If there are no event listeners for that event,
nothing should happen. Otherwise, event listeners that do exist for that event should have their callback functions invoked.
- For example, given the event listener added in the first bullet point and assuming it hadn't been removed,
dispatchEvent('click') would call onClick.
- Events can be dispatched multiple times, and each time, every associated callback should be invoked.
*/

class EventTarget {
  constructor() {
    this.events = new Map();
  }

  addEventListener(name, callback) {
    this.events.set(name, [...(this.events.get(name) || []), callback]);
  }

  removeEventListener(name, callback) {
    const removedCallback = (this.events.get(name) || []).filter(
      (event) => event !== callback
    );
    this.events.set(name, removedCallback);
  }

  dispatchEvent(name) {
    if (this.events.has(name)) {
      for (const callback of this.events.get(name)) {
        callback();
      }
    }
  }
}
