let projectDir = Utils.getProjectDir();

include Rely.Make({
  let config =
    Rely.TestFrameworkConfig.initialize({
      snapshotDir:
        Filename.(
          projectDir
          |> (dir => Filename.concat(dir, "test"))
          |> (dir => Filename.concat(dir, "__snapshots__"))
        ),
      projectDir,
    });
});