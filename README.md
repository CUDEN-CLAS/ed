# A Backdrop CMS Custon Entity Demo

This repo contains 4 modules that show how to develop custom entities in Backdrop. All 4 modules define a `student` entity, and get progressively more complex.

**Important:**
1. Don't use these modules on production sites 
2. Fully uninstall each module before installing the next one provided here. Otherwise you'll get a "white screen of death" and you site will be unreachable
3. If you create Student entities, be sure to delete them before uninstalling the module
4. If you add fields to your Student entity, be sure to fully delete the fields and run Cron before uninstalling. There is a bug in Backdrop's core that prevents the deletion of field data when uninstalling an entity.

## Demo 1 (ed1.module)
This demo shows that basic setup to define a new custom entity.
1. The `student` entity is not fieldable
2. The first part of the module is enough for core to recognize the entity. You can use `entity_create`, `entity_load` etc. to operate on the entity
3. The second part of the module file provides some basic UI and permissions:
   - Forms to create and edit students 
   - A basic table of existing students (available at path `student`)
   - Operation links to create, view, edit and delete students
  
## Demo 2 (ed2.module)
This demo provides a **fieldable** entity, and adds basic handling of bundles.
1. Two bundles are hard-coded as part of the entity definition (`basic_student` and `adult_student`)
2. Provides a listing of the bundles at `admin/student-bundle`
3. A basic function to load bundle information, which is made available to the Field API
4. Allows Field API to provide "Manage fields" and "Manage display" tabs for each bundle
5. All forms and table from ed1 still available at path `student`

## Demo 3 (ed3.module)
This demo provides dynamic bundle creation capabilities. It also places the admin functions within the Structure admin menu. Basic bundle information (label and machine name) are saved as config files.
1. Bundles can be dynamically created at `admin/structure/student-bundle`
2. All functionality of Demo 2 are available
3. Defines "extra fields" (aka pseudo fields) for the entity properties. This allows the admin to move those fields around or to hide them in the Manage display UI

## Demo 4 (ed4.module)
This demo depends on Entity Plus. It replaces the entity controller for `EntityPlusController` to provide seamless Views integration, tokens, Entity Metadata Wrappers and more. 
1. The list of Students is now a View. All properties defined in hook_schema are avialable as Views fields and filters
2. All functionality from ed4 is available

Feel free to fork and play around. Issues and PRs are also welcome.


