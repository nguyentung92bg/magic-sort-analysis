/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleProgressView$$Dispose
void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView__Dispose (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleProgressView$$Dispose
   void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView__Dispose
   (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView__Dispose_3760ed8
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_0578b048;
  if ((bRam0000000005c33bd2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057e5c98);
    bRam0000000005c33bd2 = 1;
  }
  lVar8 = *(long *)(param_1 + 0x40);
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if ((lVar6 == 0) ||
     (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)PTR_DAT_057e5c98,0), lVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__remove_OnSelectSuccessEvent_4006260
            (lVar8,lVar6,0);
  if ((bRam0000000005c33bce & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a5ca0);
    FUN_012d0dc8(PTR_DAT_05778ae0);
    FUN_012d0dc8(PTR_DAT_057c0828);
    FUN_012d0dc8(PTR_DAT_057ad690);
    FUN_012d0dc8(PTR_DAT_057a6c70);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c33bce = 1;
  }
  puVar4 = PTR_DAT_057a5ca0;
  puVar3 = PTR_DAT_05778ae0;
  puVar2 = PTR_DAT_0576c200;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  if (*(long *)(param_1 + 0x58) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_48,*(long *)(param_1 + 0x58),*(undefined8 *)PTR_DAT_057a6c70);
    while (uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_48,*(undefined8 *)puVar3), uVar5 = uStack_38, (uVar7 & 1) != 0
          ) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      UnityEngine_Object__Destroy_4091dc4(uVar5,0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_48,*(undefined8 *)puVar4);
    lVar6 = *(long *)(param_1 + 0x58);
    if (lVar6 != 0) {
      iVar1 = *(int *)(lVar6 + 0x18);
      *(undefined4 *)(lVar6 + 0x18) = 0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear_26a6bec(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

