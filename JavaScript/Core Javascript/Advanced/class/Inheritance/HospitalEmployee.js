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

const nursePushpa = new Nurse("Olynyk", ["Trauma", "Pediatrics"]);
nursePushpa.takeVacationDays(5);
console.log(nursePushpa.remainingVacationDays);
nursePushpa.addCertification("Genetics");
console.log(nursePushpa.certifications);

class Doctor extends HospitalEmployee {
  constructor(name, insurance) {
    super(name);
    this._insurance = insurance;
  }
}

const DoctorKiran = new Doctor("Kiran");
