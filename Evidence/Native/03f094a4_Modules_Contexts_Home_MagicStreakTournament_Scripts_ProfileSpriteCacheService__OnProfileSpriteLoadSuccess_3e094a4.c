/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpriteCacheService$$OnProfileSpriteLoadSuccess
void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__OnProfileSpriteLoadSuccess (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService_o* __this, Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheRequest_o* profileSpriteCacheRequest, UnityEngine_Texture2D_o* texture, System_Byte_array* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpriteCacheService$$OnProfileSpriteLoadSuccess
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__OnProfileSpriteLoadSuccess
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService_o* __this,
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheRequest_o*
   profileSpriteCacheRequest, UnityEngine_Texture2D_o* texture, System_Byte_array* data, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__OnProfileSpriteLoadSuccess_3e094a4
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam0000000005c38033 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c9c08);
    FUN_012d0dc8(PTR_DAT_0576ead8);
    FUN_012d0dc8(PTR_DAT_057808f0);
    FUN_012d0dc8(PTR_DAT_05771268);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057abb98);
    bRam0000000005c38033 = 1;
  }
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + 0x29) = 1;
    uVar2 = Modules_Contexts_Home_UI_Profile_Scripts_SocialProfilePhotoManager__ConvertTextureToSprite_2adfdac
                      (param_3,0);
    if (*(long *)(param_1 + 0x10) != 0) {
      System_Collections_Generic_Dictionary_object__object___set_Item_3ed028c
                (*(long *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x20),uVar2,
                 *(undefined8 *)PTR_DAT_057c9c08);
      if ((*(ulong *)(param_2 + 0x30) >> 0x20 == 0) && ((*(ulong *)(param_2 + 0x30) & 0xff) != 0)) {
        if ((*(long *)(param_1 + 0x48) == 0) ||
           (lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar3 == 0)) goto LAB_03f095e4;
        Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__Add_3e0a5a0
                  (lVar3,param_2,param_4);
      }
      puVar1 = PTR_DAT_05771268;
      if (*(int *)(*(long *)PTR_DAT_057b8520 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar1);
      if (lVar3 != 0) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal_object__object___Invoke_333e8fc
                  (lVar3,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10),
                   *(undefined8 *)PTR_DAT_057abb98);
        *(undefined1 *)(param_1 + 0x51) = 1;
        return;
      }
    }
  }
LAB_03f095e4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

