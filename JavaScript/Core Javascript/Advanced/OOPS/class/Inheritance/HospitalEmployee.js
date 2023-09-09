class HospitalEmployee {
  constructor(name) {
    this._name = name;
    this._remainingVacationDays = 20;
  }

  get name() {
    return this._name;
  }

  get remainingVacationDays() {
    return this._remainingVacationDays;
  }

  takeVacationDays(daysOff) {
    this._remainingVacationDays -= daysOff;
  }

  static generatePassword() {
    return Math.floor(Math.random() * 10001);
  }
}

class Nurse extends HospitalEmployee {
  constructor(name, certifications) {
    super(name);
    this._certifications = certifications;
  }

  get certifications() {
    return this._certifications;
  }

  addCertification(newCertification) {
    this.certifications.push(newCertification);
  }
}

const nursePushpa = new Nurse("Pushpa", ["Trauma", "Pediatrics"]);
nursePushpa.addCertification("Genetics");
nursePushpa.takeVacationDays(5);

console.log(nursePushpa._name); // accessible {normal properties}
console.log(nursePushpa.name); // accessible  {getter}
console.log(nursePushpa.certifications);
console.log(nursePushpa.remainingVacationDays);



class Doctor extends HospitalEmployee {
  constructor(name, insurance=5) {
    super(name);
    this._insurance = insurance;
  }
  get insurance() {
    return this._insurance;
  }
}

const DoctorKiran = new Doctor("Kiran",10);

console.log(DoctorKiran.name);
console.log(DoctorKiran.insurance);
