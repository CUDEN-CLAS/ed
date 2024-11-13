<?php

class Student extends Entity {
  /**
   * The student ID.
   * 
   * @var integer
   */
  public $student_id;

  /**
   * The name of the student.
   * 
   * @var string
   */
  public $name;

  /**
   * The user ID of the author.
   * 
   * @var integer
   */
  public $uid;

  /**
   * The Unix timestamp for the date the student was created.
   * 
   * @var integer
   */
  public $created;

  
  /**
   * Implements EntityInterface::entityType().
   */
  public function entityType() {
    return 'student';
  }

  /**
   * Implements EntityInterface::label().
   */
  public function label() {
    return $this->name;
  }

  /**
   * Implements EntityInterface::id().
   */
  public function id() {
    return !empty($this->student_id) ? $this->student_id : NULL;
  }

  /**
   * Implements EntityInterface::uri().
   */
  public function uri() {
    return array(
      'path' => 'student/' . $this->id(),
      'options' => array(),
    );
  }
}
