/*
  Event Emiter
  1. `on` & `emit`
  2. `off`
  3. `once`
*/

class EventEmiter {
  events = {};

  on(eventName, fn) {
    if (!this.events[eventName]) {
      this.events[eventName] = [{ subscriber: 'on', fn }];
    } else {
      this.events[eventName].push({ subscriber: 'on', fn });
    }
  }

  emit(eventName, ...args) {
    if (this.events[eventName]) {
      for (let i = 0; i < this.events[eventName].length; i++) {
        this.events[eventName][i].fn(...args);

        if (this.events[eventName][i].subscriber === 'once') {
          this.off(eventName, this.events[eventName][i].fn);
        }
      }
    }
  }

  off(eventName, fn) {
    if (this.events[eventName]) {
      this.events[eventName] = this.events[eventName].filter(
        (event) => event.fn !== fn
      );
    }
  }

  once(eventName, fn) {
    if (!this.events[eventName]) {
      this.events[eventName] = [{ subscriber: 'once', fn }];
    } else {
      this.events[eventName].push({ subscriber: 'once', fn });
    }
  }
}

const eventEmitet = new EventEmiter();

const fn1 = (param1, param2) => console.log('test 1', param1, param2);

eventEmitet.once('test', fn1);
eventEmitet.emit('test', 'param1', 'param2'); // log param1, param2
eventEmitet.emit('test', 'param1', 'param2'); // log nothing
