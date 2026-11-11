/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelWinPopUpView$$SelectDifficultyAssets
void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUpView__SelectDifficultyAssets (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUpView_o* __this, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelWinPopUpView$$SelectDifficultyAssets
   void 
   Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUpView__SelectDifficultyAssets
   (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUpView_o* __this, int32_t level,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUpView__SelectDifficultyAssets_16f00b0
               (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c24b50 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05808828);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057de4f8);
    bRam0000000005c24b50 = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) == 0) ||
      (lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar3 == 0)) ||
     (plVar4 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar3,*(undefined8 *)PTR_DAT_05808828), plVar4 == (long *)0x0))
  goto LAB_017f06cc;
  lVar3 = *plVar4;
  uVar7 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_057de4f8) {
        puVar5 = (undefined8 *)(lVar3 + (long)(*piVar8 + 4) * 0x10 + 0x138);
        goto LAB_017f018c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_0131971c(plVar4,*(long *)PTR_DAT_057de4f8,4);
LAB_017f018c:
  iVar2 = (*(code *)*puVar5)(plVar4,param_2,puVar5[1]);
  if (*(char *)(param_1 + 0xc0) != '\0') {
    iVar2 = 0;
  }
  if (iVar2 == 2) {
    *(undefined2 *)(param_1 + 0xc1) = 0x100;
    if ((*(long *)(param_1 + 0x28) != 0) && (*(long *)(param_1 + 0x40) != 0)) {
      UnityEngine_SpriteRenderer__set_sprite_4095b64
                (*(long *)(param_1 + 0x40),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xe8),0);
      if ((*(long *)(param_1 + 0x28) != 0) && (*(long *)(param_1 + 0x48) != 0)) {
        UnityEngine_SpriteRenderer__set_sprite_4095b64
                  (*(long *)(param_1 + 0x48),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xe8),0);
        if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x50) == 0)) goto LAB_017f06cc;
        UnityEngine_SpriteRenderer__set_sprite_4095b64
                  (*(long *)(param_1 + 0x50),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xf0),0);
        if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x58) == 0)) goto LAB_017f06cc;
        UnityEngine_SpriteRenderer__set_sprite_4095b64
                  (*(long *)(param_1 + 0x58),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xf0),0);
        if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x60) == 0)) goto LAB_017f06cc;
        UnityEngine_SpriteRenderer__set_sprite_4095b64
                  (*(long *)(param_1 + 0x60),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x110),0);
        if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x68) == 0)) goto LAB_017f06cc;
        UnityEngine_SpriteRenderer__set_sprite_4095b64
                  (*(long *)(param_1 + 0x68),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x110),0);
        if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x70) == 0)) goto LAB_017f06cc;
        UnityEngine_SpriteRenderer__set_sprite_4095b64
                  (*(long *)(param_1 + 0x70),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x110),0);
        if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x78) == 0)) goto LAB_017f06cc;
        UnityEngine_SpriteRenderer__set_sprite_4095b64
                  (*(long *)(param_1 + 0x78),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x118),0);
        if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x80) == 0)) goto LAB_017f06cc;
        UnityEngine_SpriteRenderer__set_sprite_4095b64
                  (*(long *)(param_1 + 0x80),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x120),0);
        if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x88) == 0)) goto LAB_017f06cc;
        TMPro_TMP_Text__set_fontMaterial_3dbc5d0
                  (*(long *)(param_1 + 0x88),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x138),0);
        if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x98) == 0)) goto LAB_017f06cc;
        TMPro_TMP_Text__set_fontMaterial_3dbc5d0
                  (*(long *)(param_1 + 0x98),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x138),0);
        if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0xa0) == 0)) goto LAB_017f06cc;
        TMPro_TMP_Text__set_fontMaterial_3dbc5d0
                  (*(long *)(param_1 + 0xa0),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x138),0);
        if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0xa8) == 0)) goto LAB_017f06cc;
        TMPro_TMP_Text__set_fontMaterial_3dbc5d0
                  (*(long *)(param_1 + 0xa8),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x138),0);
        if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x90) == 0)) goto LAB_017f06cc;
        TMPro_TMP_Text__set_fontMaterial_3dbc5d0
                  (*(long *)(param_1 + 0x90),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x130),0);
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_017f06cc;
        UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x30),0,0);
        lVar3 = *(long *)(param_1 + 0x38);
        if (lVar3 == 0) goto LAB_017f06cc;
        uVar6 = 1;
        goto LAB_017f06b8;
      }
    }
  }
  else {
    if (iVar2 == 1) {
      *(undefined2 *)(param_1 + 0xc1) = 1;
      if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x40) == 0)) goto LAB_017f06cc;
      UnityEngine_SpriteRenderer__set_sprite_4095b64
                (*(long *)(param_1 + 0x40),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x80),0);
      if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x48) == 0)) goto LAB_017f06cc;
      UnityEngine_SpriteRenderer__set_sprite_4095b64
                (*(long *)(param_1 + 0x48),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x80),0);
      if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x50) == 0)) goto LAB_017f06cc;
      UnityEngine_SpriteRenderer__set_sprite_4095b64
                (*(long *)(param_1 + 0x50),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x88),0);
      if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x58) == 0)) goto LAB_017f06cc;
      UnityEngine_SpriteRenderer__set_sprite_4095b64
                (*(long *)(param_1 + 0x58),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x88),0);
      if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x60) == 0)) goto LAB_017f06cc;
      UnityEngine_SpriteRenderer__set_sprite_4095b64
                (*(long *)(param_1 + 0x60),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xa8),0);
      if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x68) == 0)) goto LAB_017f06cc;
      UnityEngine_SpriteRenderer__set_sprite_4095b64
                (*(long *)(param_1 + 0x68),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xa8),0);
      if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x70) == 0)) goto LAB_017f06cc;
      UnityEngine_SpriteRenderer__set_sprite_4095b64
                (*(long *)(param_1 + 0x70),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xa8),0);
      if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x78) == 0)) goto LAB_017f06cc;
      UnityEngine_SpriteRenderer__set_sprite_4095b64
                (*(long *)(param_1 + 0x78),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xb0),0);
      if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x80) == 0)) goto LAB_017f06cc;
      UnityEngine_SpriteRenderer__set_sprite_4095b64
                (*(long *)(param_1 + 0x80),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xb8),0);
      if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x88) == 0)) goto LAB_017f06cc;
      TMPro_TMP_Text__set_fontMaterial_3dbc5d0
                (*(long *)(param_1 + 0x88),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xd0),0);
      if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x98) == 0)) goto LAB_017f06cc;
      TMPro_TMP_Text__set_fontMaterial_3dbc5d0
                (*(long *)(param_1 + 0x98),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xd0),0);
      if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0xa0) == 0)) goto LAB_017f06cc;
      TMPro_TMP_Text__set_fontMaterial_3dbc5d0
                (*(long *)(param_1 + 0xa0),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xd0),0);
      if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0xa8) == 0)) goto LAB_017f06cc;
      TMPro_TMP_Text__set_fontMaterial_3dbc5d0
                (*(long *)(param_1 + 0xa8),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xd0),0);
      if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x90) == 0)) goto LAB_017f06cc;
      TMPro_TMP_Text__set_fontMaterial_3dbc5d0
                (*(long *)(param_1 + 0x90),*(undefined8 *)(*(long *)(param_1 + 0x28) + 200),0);
      lVar3 = *(long *)(param_1 + 0x30);
      if (lVar3 == 0) goto LAB_017f06cc;
      uVar6 = 1;
    }
    else {
      *(undefined2 *)(param_1 + 0xc1) = 0;
      if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x40) == 0)) goto LAB_017f06cc;
      UnityEngine_SpriteRenderer__set_sprite_4095b64
                (*(long *)(param_1 + 0x40),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20),0);
      if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x48) == 0)) goto LAB_017f06cc;
      UnityEngine_SpriteRenderer__set_sprite_4095b64
                (*(long *)(param_1 + 0x48),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20),0);
      if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x50) == 0)) goto LAB_017f06cc;
      UnityEngine_SpriteRenderer__set_sprite_4095b64
                (*(long *)(param_1 + 0x50),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28),0);
      if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x58) == 0)) goto LAB_017f06cc;
      UnityEngine_SpriteRenderer__set_sprite_4095b64
                (*(long *)(param_1 + 0x58),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28),0);
      if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x60) == 0)) goto LAB_017f06cc;
      UnityEngine_SpriteRenderer__set_sprite_4095b64
                (*(long *)(param_1 + 0x60),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x48),0);
      if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x68) == 0)) goto LAB_017f06cc;
      UnityEngine_SpriteRenderer__set_sprite_4095b64
                (*(long *)(param_1 + 0x68),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x48),0);
      if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x70) == 0)) goto LAB_017f06cc;
      UnityEngine_SpriteRenderer__set_sprite_4095b64
                (*(long *)(param_1 + 0x70),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x48),0);
      if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x78) == 0)) goto LAB_017f06cc;
      UnityEngine_SpriteRenderer__set_sprite_4095b64
                (*(long *)(param_1 + 0x78),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50),0);
      if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x80) == 0)) goto LAB_017f06cc;
      UnityEngine_SpriteRenderer__set_sprite_4095b64
                (*(long *)(param_1 + 0x80),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x58),0);
      if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x88) == 0)) goto LAB_017f06cc;
      TMPro_TMP_Text__set_fontMaterial_3dbc5d0
                (*(long *)(param_1 + 0x88),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x68),0);
      if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x98) == 0)) goto LAB_017f06cc;
      TMPro_TMP_Text__set_fontMaterial_3dbc5d0
                (*(long *)(param_1 + 0x98),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x68),0);
      if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0xa0) == 0)) goto LAB_017f06cc;
      TMPro_TMP_Text__set_fontMaterial_3dbc5d0
                (*(long *)(param_1 + 0xa0),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x68),0);
      if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0xa8) == 0)) goto LAB_017f06cc;
      TMPro_TMP_Text__set_fontMaterial_3dbc5d0
                (*(long *)(param_1 + 0xa8),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x68),0);
      if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x90) == 0)) goto LAB_017f06cc;
      TMPro_TMP_Text__set_fontMaterial_3dbc5d0
                (*(long *)(param_1 + 0x90),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x60),0);
      lVar3 = *(long *)(param_1 + 0x30);
      if (lVar3 == 0) goto LAB_017f06cc;
      uVar6 = 0;
    }
    UnityEngine_GameObject__SetActive_408e318(lVar3,uVar6,0);
    lVar3 = *(long *)(param_1 + 0x38);
    if (lVar3 != 0) {
      uVar6 = 0;
LAB_017f06b8:
      if (pcRam0000000005c3a388 == (code *)0x0) {
        pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
      }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a388)(lVar3,uVar6);
      return;
    }
  }
LAB_017f06cc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

