/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileFrameSelectionContainer$$OnDestroy
void Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSelectionContainer__OnDestroy (Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSelectionContainer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileFrameSelectionContainer$$OnDestroy
   void Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSelectionContainer__OnDestroy
   (Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSelectionContainer_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSelectionContainer__OnDestroy_2989e30
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((bRam0000000005c2d7b2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a4800);
    FUN_012d0dc8(PTR_DAT_057cc0b0);
    FUN_012d0dc8(PTR_DAT_0581b040);
    FUN_012d0dc8(PTR_DAT_057bff30);
    bRam0000000005c2d7b2 = 1;
  }
  puVar3 = PTR_DAT_0581b040;
  puVar2 = PTR_DAT_057bff30;
  puVar1 = PTR_DAT_057a4800;
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 != 0) {
    iVar5 = 0;
    do {
      if (*(int *)(lVar4 + 0x18) <= iVar5) {
        return;
      }
      lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar4,iVar5,*(undefined8 *)puVar3);
      if (lVar4 == 0) break;
      plVar6 = (long *)(lVar4 + 0x50);
      lVar7 = *plVar6;
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar4 == 0) break;
      System_Action_object____ctor_1647468(lVar4,param_1,*(undefined8 *)puVar2,0);
      lVar4 = System_Delegate__Remove_23e3b70(lVar7,lVar4,0);
      if (lVar4 == 0) {
        lVar7 = 0;
        *plVar6 = 0;
      }
      else {
        uVar8 = *(undefined8 *)puVar1;
        lVar7 = thunk_FUN_01320d5c(lVar4,uVar8);
        if (lVar7 == 0) {
LAB_02a89f74:
                    /* WARNING: Subroutine does not return */
          FUN_012d1288(lVar4,uVar8);
        }
        *plVar6 = lVar7;
        uVar8 = *(undefined8 *)puVar1;
        lVar7 = thunk_FUN_01320d5c(lVar4,uVar8);
        if (lVar7 == 0) goto LAB_02a89f74;
      }
      FUN_012d0d74(plVar6,lVar7);
      lVar4 = *(long *)(param_1 + 0x18);
      iVar5 = iVar5 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

