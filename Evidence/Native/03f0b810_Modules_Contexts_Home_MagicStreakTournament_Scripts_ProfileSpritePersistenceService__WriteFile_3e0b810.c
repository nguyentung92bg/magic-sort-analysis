/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceService$$WriteFile
bool Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__WriteFile (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService_o* __this, System_String_o* tempPath, System_String_o* filePath, System_Byte_array* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceService$$WriteFile
   bool 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__WriteFile
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService_o* __this,
   System_String_o* tempPath, System_String_o* filePath, System_Byte_array* data, const MethodInfo*
   method); */

undefined8
Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__WriteFile_3e0b810
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__CreateDirectoryIfNotExists_3e0b8f4
            (param_2);
  Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__CreateDirectoryIfNotExists_3e0b8f4
            (param_3);
  System_IO_File__WriteAllBytes_3485dbc(param_2,param_4,0);
  System_IO_File__Delete_34847a4(param_3,0);
  System_IO_File__Move_3487048(param_2,param_3,0);
  return 1;
}

