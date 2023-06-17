class Calculator {
  constructor(init) {
    this.res = init;
  }
  add(num) {
    this.res += num;
    return this;
  }
  subtract(num) {
    this.res -= num;
    return this;
  }
  multiply(num) {
    this.res *= num;
    return this;
  }
  divide(num) {
    if (num === 0) throw new Error("Division by zero is not allowed");
    this.res /= num;
    return this;
  }
  power(num) {
    this.res = this.res ** num;
    return this;
  }
  getResult() {
    return this.res;
  }
}