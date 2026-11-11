/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.MergeItemSpriteConfig$$GetSprite
UnityEngine_Sprite_o* Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemSpriteConfig__GetSprite (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemSpriteConfig_o* __this, int32_t setId, int32_t level, bool isLocked, bool isLarge, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.MergeItemSpriteConfig$$GetSprite
   UnityEngine_Sprite_o*
   Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemSpriteConfig__GetSprite
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemSpriteConfig_o* __this, int32_t setId,
   int32_t level, bool isLocked, bool isLarge, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemSpriteConfig__GetSprite_3fa7e80
          (long param_1,int param_2,undefined4 param_3,uint param_4,uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  if ((bRam0000000005c3900c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05807f60);
    FUN_012d0dc8(PTR_DAT_057638f8);
    FUN_012d0dc8(PTR_DAT_05758eb0);
    FUN_012d0dc8(PTR_DAT_057c9d40);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0577a590);
    FUN_012d0dc8(PTR_DAT_057ca270);
    bRam0000000005c3900c = 1;
  }
  puVar5 = PTR_DAT_05807f60;
  puVar4 = PTR_DAT_057db748;
  puVar3 = PTR_DAT_057ca270;
  puVar2 = PTR_DAT_057638f8;
  puVar1 = PTR_DAT_05758eb0;
  uStack_60 = 0;
  lStack_58 = 0;
  uStack_68 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_68,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_0577a590);
    while( true ) {
      uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_68,*(undefined8 *)puVar1);
      if ((uVar6 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_68,*(undefined8 *)puVar2);
        iStack_6c = param_2;
        uVar7 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_6c);
        uVar7 = System_String__Format_1ec10a8(*(undefined8 *)puVar3,uVar7,0);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)puVar5);
        }
        UnityEngine_Debug__LogWarning_40800c4(uVar7,0);
        return 0;
      }
      if (lStack_58 == 0) break;
      if (*(int *)(lStack_58 + 0x10) == param_2) {
        uVar7 = Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemSpriteSet__GetSprite_3faa438
                          (lStack_58,param_3,param_4 & 1,param_5 & 1);
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_68,*(undefined8 *)puVar2);
        return uVar7;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

