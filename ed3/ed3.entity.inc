<?php

class Student extends Entity {
  public function entityType() {
    return 'student';
  }
  
  public function label() {
    return $this->name;
  }

  public function id() {
    return !empty($this->student_id) ? $this->student_id : NULL;
  }

  public function uri() {
    return array(
      'path' => 'student/' . $this->id(),
      'options' => array(),
    );
  }
}
