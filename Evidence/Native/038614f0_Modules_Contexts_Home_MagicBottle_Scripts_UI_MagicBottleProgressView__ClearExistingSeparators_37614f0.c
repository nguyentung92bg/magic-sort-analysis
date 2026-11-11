/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleProgressView$$ClearExistingSeparators
void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView__ClearExistingSeparators (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleProgressView$$ClearExistingSeparators
   void 
   Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView__ClearExistingSeparators
   (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView__ClearExistingSeparators_37614f0
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
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
    while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_48,*(undefined8 *)puVar3), uVar5 = uStack_38, (uVar6 & 1) != 0
          ) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      UnityEngine_Object__Destroy_4091dc4(uVar5,0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_48,*(undefined8 *)puVar4);
    lVar7 = *(long *)(param_1 + 0x58);
    if (lVar7 != 0) {
      iVar1 = *(int *)(lVar7 + 0x18);
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear_26a6bec(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

