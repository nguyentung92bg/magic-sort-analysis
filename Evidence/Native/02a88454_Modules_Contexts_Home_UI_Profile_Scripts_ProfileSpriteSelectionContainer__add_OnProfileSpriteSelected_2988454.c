/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileSpriteSelectionContainer$$add_OnProfileSpriteSelected
void Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer__add_OnProfileSpriteSelected (Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer_o* __this, System_Action_string__o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.UI.Profile.Scripts.ProfileSpriteSelectionContainer$$add_OnProfileSpriteSelected
   void 
   Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer__add_OnProfileSpriteSelected
   (Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer_o* __this,
   System_Action_string__o* value, const MethodInfo* method); */

void Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer__add_OnProfileSpriteSelected_2988454
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((bRam0000000005c2d7dd & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058030d8);
    bRam0000000005c2d7dd = 1;
  }
  puVar1 = PTR_DAT_058030d8;
  lVar5 = *(long *)(param_1 + 0x30);
  do {
    lVar3 = System_Delegate__Combine_23e3964(lVar5,param_2,0);
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      uVar6 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_01320d5c(lVar3,uVar6);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d1288(lVar3,uVar6);
      }
    }
    lVar3 = FUN_01351224((long *)(param_1 + 0x30),lVar4,lVar5);
    bVar2 = lVar5 != lVar3;
    lVar5 = lVar3;
  } while (bVar2);
  return;
}

