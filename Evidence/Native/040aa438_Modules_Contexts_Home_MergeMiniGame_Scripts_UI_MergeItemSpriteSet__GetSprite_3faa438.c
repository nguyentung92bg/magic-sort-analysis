/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.MergeItemSpriteSet$$GetSprite
UnityEngine_Sprite_o* Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemSpriteSet__GetSprite (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemSpriteSet_o* __this, int32_t level, bool isLocked, bool isLarge, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.MergeItemSpriteSet$$GetSprite
   UnityEngine_Sprite_o*
   Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemSpriteSet__GetSprite
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemSpriteSet_o* __this, int32_t level, bool
   isLocked, bool isLarge, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemSpriteSet__GetSprite_3faa438
          (long param_1,int param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iStack_8c;
  undefined4 auStack_88 [2];
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  if ((bRam0000000005c3900e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05807f60);
    FUN_012d0dc8(PTR_DAT_057eb1c0);
    FUN_012d0dc8(PTR_DAT_0576e7c8);
    FUN_012d0dc8(PTR_DAT_057eded8);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0579b3f0);
    FUN_012d0dc8(PTR_DAT_05769fd0);
    bRam0000000005c3900e = 1;
  }
  puVar5 = PTR_DAT_05807f60;
  puVar4 = PTR_DAT_057eb1c0;
  puVar3 = PTR_DAT_057db748;
  puVar2 = PTR_DAT_0576e7c8;
  puVar1 = PTR_DAT_05769fd0;
  uStack_68 = 0;
  lStack_60 = 0;
  uStack_70 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (auStack_88,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_0579b3f0);
    uStack_68 = uStack_80;
    lStack_60 = lStack_78;
    while( true ) {
      uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_70,*(undefined8 *)puVar2);
      if ((uVar6 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_70,*(undefined8 *)puVar4);
        auStack_88[0] = *(undefined4 *)(param_1 + 0x10);
        uVar7 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,auStack_88);
        iStack_8c = param_2;
        uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&iStack_8c);
        uVar7 = System_String__Format_1ed15b8(*(undefined8 *)puVar1,uVar7,uVar8,0);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)puVar5);
        }
        UnityEngine_Debug__LogWarning_40800c4(uVar7,0);
        return 0;
      }
      if (lStack_60 == 0) break;
      if (*(int *)(lStack_60 + 0x10) == param_2) {
        if ((param_4 & 1) == 0) {
          if ((param_3 & 1) == 0) {
            uVar7 = Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemSprite__get_NormalSprite_3faa7ac
                              (lStack_60);
          }
          else {
            uVar7 = Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemSprite__get_LockedSprite_3faa834
                              (lStack_60);
          }
        }
        else {
          uVar7 = Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemSprite__get_LargeSprite_3faa724
                            (lStack_60);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_70,*(undefined8 *)puVar4);
        return uVar7;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

