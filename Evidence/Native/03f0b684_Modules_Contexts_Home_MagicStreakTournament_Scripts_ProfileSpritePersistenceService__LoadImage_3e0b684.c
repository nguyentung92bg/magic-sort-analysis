/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceService$$LoadImage
UnityEngine_Texture2D_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__LoadImage (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService_o* __this, System_Byte_array* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceService$$LoadImage
   UnityEngine_Texture2D_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__LoadImage
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService_o* __this,
   System_Byte_array* data, const MethodInfo* method); */

long Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__LoadImage_3e0b684
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_057d6d60;
  if ((bRam0000000005c38050 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d6d60);
    bRam0000000005c38050 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    UnityEngine_Texture2D___ctor_407c098(lVar2,0x80,0x80,0);
    UnityEngine_ImageConversion__LoadImage_3b01ef0(lVar2,param_2,0);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

